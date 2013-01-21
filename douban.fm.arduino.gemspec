lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'douban.fm.arduino/version'

Gem::Specification.new do |gem|
  gem.name          = "douban.fm.arduino"
  gem.version       = DoubanFMArduino::VERSION
  gem.authors       = ["honnix"]
  gem.email         = ["hxliang1982@gmail.com"]
  gem.description   = %q{douban.fm.arduino}
  gem.summary       = %q{douban.fm.arduino}
  gem.homepage      = "https://github.com/honnix/douban.fm.arduino"

  gem.files         = `git ls-files`.split($/)
  gem.executables   = gem.files.grep(%r{^bin/}).map{ |f| File.basename(f) }
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ["lib"]

  gem.add_dependency 'serialport', '1.1.0'
end
