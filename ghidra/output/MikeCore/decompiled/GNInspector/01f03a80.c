// Function: FUN_01f03a80
// Address: 01f03a80
// Size: 2269 bytes
// Class: GNInspector
// String references:
//   "GNInspector"


/* WARNING: Removing unreachable block (ram,0x01f03d91) */
/* WARNING: Removing unreachable block (ram,0x01f03d9d) */
/* WARNING: Removing unreachable block (ram,0x01f03b58) */
/* WARNING: Removing unreachable block (ram,0x01f03b64) */
/* WARNING: Removing unreachable block (ram,0x01f0404c) */
/* WARNING: Removing unreachable block (ram,0x01f04058) */
/* WARNING: Removing unreachable block (ram,0x01f040b0) */
/* WARNING: Removing unreachable block (ram,0x01f040bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f03a80(void)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  int local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_41;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  local_70 = puVar3;
  (*DAT_02572370)();
  if ((DAT_028ba720 != 0) && (0 < *(int *)(DAT_028ba720 + 0xc))) {
    lVar6 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(DAT_028ba720 + 0x10) + lVar6 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_00c80cd0();
      plVar5 = local_90;
      if (local_88 == '\0') {
        if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
           (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = '\0';
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00c811e0();
        plVar5 = local_90;
        if (((local_88 == '\0') && (local_90 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), local_88 != '\0' && (local_90 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar5 + 0x18))();
        (**(code **)(*plVar5 + 0x4c0))();
        local_88 = '\0';
        local_90 = plVar5;
        FUN_00d21140();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(DAT_028ba720 + 0xc));
  }
  puVar3 = local_70;
  if (DAT_028ba730 != 0) {
    local_88 = '\0';
    local_80 = *(longlong *)(DAT_028ba730 + 0x10);
    local_78 = 0;
    if (0 < *(int *)(local_80 + 0xc)) {
      do {
        local_90 = *(longlong **)(*(longlong *)(local_80 + 0x10) + (longlong)local_78 * 8);
        uVar8 = FUN_01f04930((longlong)local_78,&local_90);
        local_a0 = local_60;
        local_98 = 0;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            uVar8 = FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_98 = '\x01';
        FUN_01e51a60(uVar8,&local_a0);
        plVar5 = local_40;
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            local_c0 = (longlong *)0x0;
            local_b8 = '\x01';
            plVar5 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            local_c0 = plVar5;
            local_b8 = '\x01';
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_c0 = local_40;
          local_b8 = '\x01';
          local_38 = '\0';
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02704170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          _DAT_026d91c8 = FUN_00015ff0();
          _DAT_026d91b0 = "GNInspector";
          _DAT_026d91b8 = 0xb8;
          _DAT_026d91c0 = FUN_00018410;
          _DAT_026d91d0 = 0;
          uRam00000000026d91d8 = 0;
          _DAT_026d91e0 = 0;
          uRam00000000026d91e8 = 0;
          _DAT_026d91f0 = 0;
          uRam00000000026d91f8 = 0;
          _DAT_026d9200 = 0;
          uRam00000000026d9208 = 0;
          _DAT_026d9210 = 0;
          uRam00000000026d9218 = 0;
          _DAT_026d9220 = 0;
          uRam00000000026d9228 = 0;
          _DAT_026d9230 = 0;
          uRam00000000026d9238 = 0;
          _DAT_026d9240 = 0;
          uRam00000000026d9248 = 0;
          _DAT_026d9250 = 0;
          uRam00000000026d9258 = 0;
          _DAT_026d9260 = 0;
          uRam00000000026d9268 = 0;
          _DAT_026d9270 = 0;
          ___cxa_guard_release();
          puVar3 = local_70;
        }
        pplVar4 = (longlong **)&DAT_02802688;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar4 = &local_c0;
          if (cVar1 == '\0') {
            pplVar4 = (longlong **)&DAT_02802688;
          }
        }
        plVar5 = *pplVar4;
        local_41 = *(char *)(pplVar4 + 1);
        if ((local_41 == '\0') || (plVar5 == (longlong *)0x0)) {
          if (plVar5 != (longlong *)0x0) goto LAB_01f03e19;
        }
        else {
          FUN_00d50b00();
LAB_01f03e19:
          uVar8 = (**(code **)(*plVar5 + 0x5f8))();
          local_50 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              uVar8 = FUN_00d50b00();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              goto LAB_01f03eb6;
            }
          }
          else if (local_40 != (longlong *)0x0) {
LAB_01f03eb6:
            lVar6 = local_50[2];
            local_68 = plVar5;
            if (0 < *(int *)(lVar6 + 0xc)) {
              lVar7 = 0;
              do {
                uVar8 = FUN_01f04930(uVar8,&local_90);
                local_b0 = local_60;
                local_a8 = 0;
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    uVar8 = FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                local_a8 = '\x01';
                uVar8 = FUN_01e51a60(uVar8,&local_b0);
                plVar5 = local_40;
                if ((DAT_02704170 == '\0') &&
                   (iVar2 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar2 != 0)) {
                  _DAT_026d91c8 = FUN_00015ff0();
                  _DAT_026d91b0 = "GNInspector";
                  _DAT_026d91b8 = 0xb8;
                  _DAT_026d91c0 = FUN_00018410;
                  _DAT_026d91d0 = 0;
                  uRam00000000026d91d8 = 0;
                  _DAT_026d91e0 = 0;
                  uRam00000000026d91e8 = 0;
                  _DAT_026d91f0 = 0;
                  uRam00000000026d91f8 = 0;
                  _DAT_026d9200 = 0;
                  uRam00000000026d9208 = 0;
                  _DAT_026d9210 = 0;
                  uRam00000000026d9218 = 0;
                  _DAT_026d9220 = 0;
                  uRam00000000026d9228 = 0;
                  _DAT_026d9230 = 0;
                  uRam00000000026d9238 = 0;
                  _DAT_026d9240 = 0;
                  uRam00000000026d9248 = 0;
                  _DAT_026d9250 = 0;
                  uRam00000000026d9258 = 0;
                  _DAT_026d9260 = 0;
                  uRam00000000026d9268 = 0;
                  _DAT_026d9270 = 0;
                  uVar8 = ___cxa_guard_release();
                }
                pplVar4 = (longlong **)&DAT_02802688;
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x360))();
                  cVar1 = FUN_00e85ea0();
                  pplVar4 = &local_40;
                  uVar8 = extraout_XMM0_Da;
                  if (cVar1 == '\0') {
                    pplVar4 = (longlong **)&DAT_02802688;
                  }
                }
                plVar5 = *pplVar4;
                if (*(char *)(pplVar4 + 1) == '\0') {
                  if (plVar5 != (longlong *)0x0) {
                    uVar8 = FUN_00d50b00();
                  }
                }
                else {
                  *(undefined1 *)(pplVar4 + 1) = 0;
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  uVar8 = FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  uVar8 = FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != 0)) {
                  uVar8 = FUN_00d50b20();
                }
                if (plVar5 != (longlong *)0x0) {
                  FUN_01f02570();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  (**(code **)(*plVar5 + 0x5c0))();
                  local_38 = '\0';
                  local_40 = plVar5;
                  FUN_00d21140();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  uVar8 = FUN_00d50b20();
                }
                lVar7 = lVar7 + 1;
              } while (lVar7 < *(int *)(lVar6 + 0xc));
            }
            FUN_00d50b20();
            plVar5 = local_68;
            puVar3 = local_70;
          }
          FUN_01f02570();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x5c8))();
          if (local_40 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x5c8))();
            FUN_00d8c7a0();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          local_40 = plVar5;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_41 != '\0') {
            FUN_00d50b20();
          }
        }
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_78 = local_78 + 1;
      } while (local_78 < *(int *)(local_80 + 0xc));
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


