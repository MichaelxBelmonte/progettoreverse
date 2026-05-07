// Function: FUN_00df4a00
// Address: 00df4a00
// Size: 525 bytes
// Class: GNCompressor
// String references:
//   "BZh"


void FUN_00df4a00(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  
  iVar5 = *(int *)(*param_2 + 0x18);
  iVar3 = FUN_00e7dde0();
  uVar4 = extraout_XMM0_Da;
  if (iVar3 <= iVar5) {
    uVar4 = FUN_00e7dde0();
    iVar5 = FUN_00e7de00(extraout_XMM0_Da_00,uVar4);
    uVar4 = extraout_XMM0_Da_01;
    if (iVar5 == 0) {
      FUN_00e9eb80(0,0);
      (*(code *)0x0)(*(undefined8 *)(*param_2 + 0x10),*(undefined4 *)(*param_2 + 0x18));
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      local_38 = puVar7;
      do {
        uVar6 = FUN_00e9ecb0();
        if ((uVar6 & 0xfffffffb) == 0) {
          FUN_00c92190(extraout_XMM0_Da_02,0);
        }
      } while (uVar6 == 0);
      FUN_00e9fd30();
      *unaff_RDI = local_38;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  }
  lVar1 = DAT_02784840;
  if (DAT_02784840 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar2 = DAT_02784848;
  if (DAT_02784848 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_00df3740(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


