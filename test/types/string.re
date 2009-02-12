#
# StringTest: Tests for Reia's string type
# Copyright (C)2009 Tony Arcieri
# 
# Redistribution is permitted under the MIT license.  See LICENSE for details.
#

module StringTest
  def run
    [length_test(), inspect_test()]

  def length_test
    TestHelper.expect("String", "knows its length", fun do
      (6, "foobar".length())
    )

  def inspect_test
    TestHelper.expect("String", "inspects properly", fun do
      ("\"foobar\"", "foobar".inspect())
    )