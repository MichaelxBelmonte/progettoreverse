// Function: FUN_0120a2e0
// Address: 0120a2e0
// Size: 627 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0120a494) */
/* WARNING: Removing unreachable block (ram,0x0120a4a1) */
/* WARNING: Removing unreachable block (ram,0x0120a347) */
/* WARNING: Removing unreachable block (ram,0x0120a350) */
/* WARNING: Removing unreachable block (ram,0x0120a3d7) */
/* WARNING: Removing unreachable block (ram,0x0120a3e0) */
/* WARNING: Removing unreachable block (ram,0x0120a4ff) */
/* WARNING: Removing unreachable block (ram,0x0120a508) */

void FUN_0120a2e0(float param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *unaff_RDI;
  bool bVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong local_60;
  char local_58;
  longlong local_40;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  uVar8 = (*DAT_02572370)();
  local_40 = *unaff_RDI;
  FUN_00d214d0(uVar8,*(undefined4 *)((longlong)puVar4 + 0xc));
  FUN_00d216c0();
  if (0 < *(int *)((longlong)puVar4 + 0xc)) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(puVar4[2] + lVar7 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar1 = *(uint *)(local_40 + 0xc);
      if ((int)uVar1 < 3) {
LAB_0120a46d:
        FUN_00d21140();
        local_40 = lVar2;
      }
      else {
        uVar5 = 2;
        bVar6 = false;
        do {
          lVar3 = *(longlong *)(*(longlong *)(local_40 + 0x10) + uVar5 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          if ((*(longlong *)(lVar3 + 0x88) != 0 && DAT_0239424c < *(float *)(lVar3 + 0x50)) ||
             (param_1 < *(float *)(lVar3 + 0x50))) {
            bVar6 = true;
            FUN_015fa960(1,2);
          }
          FUN_00d50b20();
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
        if (!bVar6) goto LAB_0120a46d;
        lVar3 = *unaff_RDI;
        uVar8 = FUN_015fab90();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            uVar8 = FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_40 = local_60;
        FUN_00d214d0(uVar8,*(undefined4 *)(lVar3 + 0xc));
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)puVar4 + 0xc));
  }
  FUN_00d50b20();
  return;
}


