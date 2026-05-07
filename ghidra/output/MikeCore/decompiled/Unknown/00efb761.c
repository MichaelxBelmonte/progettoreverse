// Function: FUN_00efb761
// Address: 00efb761
// Size: 926 bytes
// Class: Unknown


int * FUN_00efb761(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong unaff_RSI;
  int *unaff_RDI;
  longlong lVar7;
  undefined4 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar5 = *(undefined8 *)(unaff_RSI + 0x30);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x20);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x28);
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  _ZSTD_seqToCodes();
  unaff_RDI[8] = 0;
  uVar3 = _HIST_countFast_wksp(param_2,uVar3,local_res20,param_5);
  *(undefined4 *)(param_3 + 0xddc) = *(undefined4 *)(param_1 + 0xddc);
  iVar2 = _ZSTD_selectEncodingType(uVar3,0x23,param_2,9,local_res10);
  *unaff_RDI = iVar2;
  uVar4 = _ZSTD_buildCTable(9,param_3 + 0x8b0,iVar2,local_res18,6,0x23,param_1 + 0x8b0,0x524,
                            local_res20,param_5);
  if (uVar4 < 0xffffffffffffff89) {
    if (iVar2 == 2) {
      *(ulonglong *)(unaff_RDI + 6) = uVar4;
    }
    uVar5 = _HIST_countFast_wksp(param_2,uVar5,local_res20,param_5);
    *(undefined4 *)(param_3 + 0xdd4) = *(undefined4 *)(param_1 + 0xdd4);
    iVar2 = _ZSTD_selectEncodingType(uVar5,0x1f,param_2,8,local_res10);
    unaff_RDI[1] = iVar2;
    uVar6 = _ZSTD_buildCTable(8,param_3,iVar2,local_res18,5,0x1c,param_1,0x304,local_res20,param_5);
    if (uVar6 < 0xffffffffffffff89) {
      if (iVar2 == 2) {
        *(ulonglong *)(unaff_RDI + 6) = uVar6;
      }
      lVar7 = uVar4 + uVar6;
      uVar5 = _HIST_countFast_wksp(param_2,uVar1,local_res20,param_5);
      *(undefined4 *)(param_3 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd8);
      iVar2 = _ZSTD_selectEncodingType(uVar5,0x34,param_2,9,local_res10);
      unaff_RDI[2] = iVar2;
      uVar6 = _ZSTD_buildCTable(9,param_3 + 0x304,iVar2,local_res18,6,0x34,param_1 + 0x304,0x5ac,
                                local_res20,param_5);
      if (uVar6 < 0xffffffffffffff89) {
        if (iVar2 == 2) {
          *(ulonglong *)(unaff_RDI + 6) = uVar6;
        }
        *(ulonglong *)(unaff_RDI + 4) = lVar7 + uVar6;
        return unaff_RDI;
      }
    }
    *(ulonglong *)(unaff_RDI + 4) = uVar6;
  }
  else {
    *(ulonglong *)(unaff_RDI + 4) = uVar4;
  }
  return unaff_RDI;
}


