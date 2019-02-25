#!/usr/bin/env ruby

string = gets
string = string.gsub(/\bf/, 'gh')
string = string.gsub(/sh\b/, 'ti')
string = string.gsub(/\Bi\B/, 'o')

puts string