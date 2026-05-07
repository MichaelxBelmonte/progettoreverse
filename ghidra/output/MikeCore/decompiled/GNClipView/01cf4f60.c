// Function: FUN_01cf4f60
// Address: 01cf4f60
// Size: 847 bytes
// Class: GNClipView


void FUN_01cf4f60(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  float *pfVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (param_2 < 4) {
    switch((ulonglong)param_2) {
    case 0:
      pfVar3 = (float *)((longlong)unaff_RDI + 0x164);
      break;
    case 1:
      pfVar3 = (float *)((longlong)unaff_RDI + 0x16c);
      break;
    case 2:
      pfVar3 = (float *)(unaff_RDI + 0x2d);
      break;
    case 3:
      pfVar3 = (float *)(unaff_RDI + 0x2e);
    }
    local_5c = *pfVar3;
    if ((local_5c != 0.0) || (NAN(local_5c))) {
      (**(code **)(*unaff_RDI + 0x7b8))();
      cVar2 = FUN_01d951e0();
      local_58 = 0;
      if (cVar2 != '\0') {
        (**(code **)(*unaff_RDI + 0x640))();
        local_58 = (**(code **)(*local_50 + 0x580))();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x7b8))();
      cVar2 = FUN_01d95200();
      local_54 = 0;
      if (cVar2 != '\0') {
        (**(code **)(*unaff_RDI + 0x640))();
        local_54 = (**(code **)(*local_50 + 0x578))();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = (**(code **)(*unaff_RDI + 0x640))();
      plVar1 = local_50;
      local_80 = DAT_026e41f0;
      if (DAT_026e41f0 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_78 = '\x01';
      (**(code **)(*plVar1 + 0x3b0))(uVar5,&local_80);
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*local_50 + 0x3a0))();
        if (local_40 != 0) {
          lVar4 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d48370();
      local_68 = '\0';
      local_70 = lVar4;
      FUN_01d488d0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40(DAT_02390124);
      fVar6 = (float)FUN_01d48a00();
      FUN_01d489d0(local_5c * fVar6);
      FUN_01e3f820();
      if (param_2 < 4) {
                    /* WARNING: Could not recover jumptable at 0x01cf51d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_01cf5598 + *(int *)(&DAT_01cf5598 + (ulonglong)param_2 * 4)))
                  (&DAT_01cf5598 + *(int *)(&DAT_01cf5598 + (ulonglong)param_2 * 4));
        return;
      }
      FUN_01d48390();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


