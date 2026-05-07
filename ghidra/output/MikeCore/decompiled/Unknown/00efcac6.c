// Function: FUN_00efcac6
// Address: 00efcac6
// Size: 596 bytes
// Class: Unknown


ulonglong FUN_00efcac6(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar7;
  
  uVar2 = _ZSTD_buildBlockEntropyStats
                    (unaff_RSI + 0xe0,*(undefined8 *)(unaff_RSI + 0xc70),
                     "/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                     unaff_RSI + 0x18,*(undefined8 *)(unaff_RSI + 0xda8));
  if (uVar2 < 0xffffffffffffff89) {
    uVar2 = unaff_RDI[3] - unaff_RDI[2];
    uVar7 = unaff_RDI[1] - *unaff_RDI >> 3;
    lVar6 = *(longlong *)(unaff_RSI + 0xc70);
    iVar1 = *(int *)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    unaff_RSI + 0x18);
    if (iVar1 - 2U < 2) {
      uVar3 = _HIST_count_wksp(uVar2,unaff_RDI[2],*(undefined8 *)(unaff_RSI + 0xda8),&DAT_000022d8);
      if (uVar3 < 0xffffffffffffff89) {
        lVar4 = _HUF_estimateCompressedSize();
        if (iVar1 == 2) {
          lVar4 = lVar4 + *(longlong *)((longlong)&dylib_command_000013a0.cmd + unaff_RSI);
        }
        lVar5 = lVar4 + 6;
        if (uVar2 < 0x100) {
          lVar5 = lVar4;
        }
        uVar2 = ((ulonglong)(0x3ff < uVar2) - (ulonglong)(uVar2 < 0x4000)) + 4 + lVar5;
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
                         + lVar6 + 0x28,&DAT_023e2960);
    lVar6 = FUN_00efcd1a(0x34,uVar7,lVar6 + 0xb14,&DAT_023e2990);
    uVar2 = *(longlong *)(&DAT_00001440 + unaff_RSI) +
            ((ulonglong)(0x7f < uVar7) - (ulonglong)(uVar7 < 0x7f00)) + uVar2 + lVar4 + lVar5 +
            lVar6 + 6;
  }
  return uVar2;
}


