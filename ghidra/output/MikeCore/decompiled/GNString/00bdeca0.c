// Function: FUN_00bdeca0
// Address: 00bdeca0
// Size: 674 bytes
// Class: GNString
// String references:
//   ".NFF"
//   "    "


/* WARNING: Removing unreachable block (ram,0x00bdecf6) */
/* WARNING: Removing unreachable block (ram,0x00bdecff) */

void FUN_00bdeca0(double param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 in_RCX;
  longlong unaff_RDI;
  bool bVar2;
  undefined8 uVar3;
  longlong local_d0;
  char local_c8;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  local_38 = *param_4;
  local_30 = '\0';
  FUN_00bba180(in_RCX,param_2,param_3,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x4c) = 5;
  *(int *)(unaff_RDI + 0x48) = (int)param_1;
  *(undefined4 *)(unaff_RDI + 0x34) = 0x13;
  uVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(4,".NFF");
  bVar2 = true;
  if (local_b8 == 0) {
    uVar3 = FUN_00ccdf50(uVar3,0x1c);
    bVar2 = true;
    if (local_a8 == 0) {
      uVar3 = FUN_00ccdf50(uVar3,0);
      bVar2 = true;
      if (local_98 == 0) {
        uVar3 = FUN_00ccdf50(uVar3,*(undefined4 *)(unaff_RDI + 0x4c));
        bVar2 = true;
        if (local_88 == 0) {
          uVar3 = FUN_00ccdf50(uVar3,*(undefined4 *)(unaff_RDI + 0x48));
          bVar2 = true;
          if (local_78 == 0) {
            FUN_00ccdf50(uVar3,*(undefined4 *)(unaff_RDI + 0x30));
            bVar2 = true;
            if (local_68 == 0) {
              uVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(4,"    ");
              bVar2 = true;
              if (local_58 == 0) {
                (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(uVar3,unaff_RDI + 0x40);
                bVar2 = local_d0 != 0;
                if ((local_c8 != '\0') && (local_d0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027653a0;
  if (bVar2) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_28 = lVar1;
    local_20 = '\x01';
    FUN_00cc78b0();
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


