// Function: FUN_01e5e460
// Address: 01e5e460
// Size: 600 bytes
// Class: GNString
// String references:
//   "frame"


/* WARNING: Removing unreachable block (ram,0x01e5e4c8) */
/* WARNING: Removing unreachable block (ram,0x01e5e4d1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e5e460(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  undefined *puVar3;
  char cVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uStack_34 = (float)((ulonglong)param_1 >> 0x20);
  local_38 = (float)param_1;
  uVar7 = param_2;
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    FUN_01f50d20();
  }
  else {
    FUN_01d907a0();
  }
  uVar5 = FUN_01f51370();
  if ((uStack_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  fVar2 = _UNK_02390374;
  local_a8 = (undefined4)param_2;
  if (*(char *)(unaff_RDI + 0x70) != '\0') {
    local_b8 = _DAT_02390370;
    while( true ) {
      FUN_01f27fe0();
      FUN_01f300e0(local_38);
      if ((uStack_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((uStack_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 == 0) break;
      local_38 = local_38 + _DAT_02421cf0;
      uStack_34 = uStack_34 + _UNK_02421cf4;
      cVar4 = FUN_00d05440(uVar5,uVar7,local_38,local_a8);
      if (cVar4 == '\0') {
        local_38 = local_b8;
        uStack_34 = fVar2;
        local_b8 = local_b8 + DAT_023b36ac;
      }
    }
  }
  puVar3 = PTR__objc_msgSend_024a9998;
  if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
    uVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
    lVar1 = (*(code *)puVar3)(uVar5,0);
    puVar3 = PTR_s_frame_026ca200;
    if (lVar1 == 0) {
      uStack_40 = 0.0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Da,PTR_s_frame_026ca200);
    }
    lVar1 = (*(code *)PTR__objc_msgSend_024a9998)();
    if (lVar1 == 0) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Da_00,puVar3);
      uVar5 = (undefined4)uStack_70;
      uVar6 = (undefined4)((ulonglong)uStack_70 >> 0x20);
    }
    (*(code *)PTR__objc_msgSend_024a9998)
              (SUB84((double)local_38,0),
               (uStack_40 - (double)uStack_34) - (double)CONCAT44(uVar6,uVar5));
  }
  FUN_01e5a130(local_a8);
  return;
}


