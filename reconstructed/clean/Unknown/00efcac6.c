// Function: FUN_00efcac6
// Address: 00efcac6
// Size: 596 bytes
// Class: Unknown

uint64_t FUN_00efcac6(void)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar7;
  
  uVar2 = _ZSTD_buildBlockEntropyStats
                    (arg1 + 0xe0,*(void*)(arg1 + 0xc70),
                     "/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                     arg1 + 0x18,*(void*)(arg1 + 0xda8));
  if (uVar2 < 0xffffffffffffff89) {
    uVar2 = this_ptr[3] - this_ptr[2];
    uVar7 = this_ptr[1] - *this_ptr >> 3;
    lVar6 = *(int64_t *)(arg1 + 0xc70);
    iVar1 = *(int *)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    arg1 + 0x18);
    if (iVar1 - 2U < 2) {
      uVar3 = _HIST_count_wksp(uVar2,this_ptr[2],*(void*)(arg1 + 0xda8),&g_000022d8);
      if (uVar3 < 0xffffffffffffff89) {
        lVar4 = _HUF_estimateCompressedSize();
        if (iVar1 == 2) {
          lVar4 = lVar4 + *(int64_t *)((int64_t)&dylib_command_000013a0.cmd + arg1);
        }
        lVar5 = lVar4 + 6;
        if (uVar2 < 0x100) {
          lVar5 = lVar4;
        }
        uVar2 = ((uint64_t)(0x3ff < uVar2) - (uint64_t)(uVar2 < 0x4000)) + 4 + lVar5;
      }
    }
    else if (iVar1 != 0) {
      if (iVar1 == 1) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    lVar4 = FUN_00efcd1a(0x1f,uVar7,lVar6 + 0x810,0);
    lVar5 = FUN_00efcd1a(0x23,uVar7,
                         "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                         + lVar6 + 0x28,&g_023e2960);
    lVar6 = FUN_00efcd1a(0x34,uVar7,lVar6 + 0xb14,&g_023e2990);
    uVar2 = *(int64_t *)(&g_00001440 + arg1) +
            ((uint64_t)(0x7f < uVar7) - (uint64_t)(uVar7 < 0x7f00)) + uVar2 + lVar4 + lVar5 +
            lVar6 + 6;
  }
  return uVar2;
}

