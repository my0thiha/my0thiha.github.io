from re import S


def double(x):
    return 2*x

# def test_double():
#     x=4
#     expected = 8
#     computed = double (x)
#     success = expected == computed
#     msg = 'computed %s , expected %s' % (computed,expected)
#     assert success, msg
# print(test_double())
def test_double ():
    tol = 1E-4
    x_values = [3,7,-2,0,4,5]
    expected_values = [6,14,-4,0,9.0001]
    for x , expected in zip(x_values,expected_values):
        computed = double (x)
        msg = "%s != %s" % (computed ,expected)
        assert abs(expected - computed)< tol,msg
test_double()