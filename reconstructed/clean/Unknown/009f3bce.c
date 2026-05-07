// Function: FUN_009f3bce
// Address: 009f3bce
// Size: 877 bytes
// Class: Unknown
// String references:
//   "could not convert calendar time to local time"
//   "Cannot convert dates prior to Jan 1, 1970"

uint64_t FUN_009f3bce(void)

{
  code *pcVar1;
  tm *ptVar2;
  logic_error *this;
  int64_t lVar3;
  runtime_error *this_00;
  int64_t lVar4;
  char *pcVar5;
  tm *ptVar6;
  runtime_error *prVar7;
  int64_t *this_ptr;
  int64_t local_d0;
  char local_98 [8];
  int64_t local_90;
  runtime_error *local_88;
  uint64_t local_80;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t local_58;
  
  this = (logic_error *)((int64_t)&MACH_HEADER.magic + 1);
  FUN_0097e7bc(1,1);
  pcVar5 = local_98;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_78 = local_58;
  FUN_00953fa0();
  if (*this_ptr < local_d0) {
    std::logic_error::logic_error(this,pcVar5);
    FUN_009f6420();
                        pcVar1 = invalidInstructionException();
    (*pcVar1)();
  }
  FUN_009a86b0();
  FUN_009f646e();
  lVar4 = *this_ptr;
  lVar3 = lVar4 % 86400000000;
  if (lVar4 + 0x8000000000000002U < 3) {
    lVar3 = lVar4;
  }
  this_00 = (runtime_error *)(((lVar3 / 60000000) % 0x3c) * 0x3c);
  ptVar6 = (tm *)((lVar3 / 1000000) / 0x3c);
  prVar7 = this_00 + (lVar3 / 1000000) % 0x3c + (lVar3 / 3600000000) * 0xe10 + local_90 * 0x15180;
  FUN_009f2f48();
  local_88 = prVar7;
  ptVar2 = _localtime_r((time_t *)this_00,ptVar6);
  if (ptVar2 != (tm *)0x0) {
    FUN_009a81f8();
    FUN_0097e070();
    FUN_00997550();
    FUN_0097e7bc(1,1);
    lVar4 = *this_ptr;
    if (lVar4 == -0x8000000000000000) {
      lVar4 = -0xbd680;
    }
    else if (lVar4 == 0x7ffffffffffffffe) {
      lVar4 = 0xbd67e;
    }
    else if (lVar4 == 0x7fffffffffffffff) {
      lVar4 = 0xbd67f;
    }
    else {
      lVar4 = (lVar4 % 86400000000) % 1000000;
    }
    local_80 = FUN_009a8638(lVar4,(int64_t)ptVar2->tm_sec);
    FUN_00953fa0();
    return CONCAT44(uStack_74,local_78);
  }
  std::runtime_error::runtime_error(this_00,(char *)ptVar6);
                      FUN_009f4f40();
}

