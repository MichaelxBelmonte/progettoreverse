// Function: FUN_00ba1140
// Address: 00ba1140
// Size: 748 bytes
// Class: GNString
// String references:
//   ".snd"
//   "    "


/* WARNING: Removing unreachable block (ram,0x00ba1199) */
/* WARNING: Removing unreachable block (ram,0x00ba11a2) */

void FUN_00ba1140(double param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_RCX;
  ulonglong uVar4;
  longlong unaff_RDI;
  bool bVar5;
  undefined8 uVar6;
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
  iVar2 = FUN_00ae7ec0();
  *(int *)(unaff_RDI + 0x4c) = iVar2 + 1;
  *(int *)(unaff_RDI + 0x48) = (int)param_1;
  uVar4 = (ulonglong)(param_3 - 0x10U);
  if (param_3 - 0x10U < 0x33) {
    if ((0x1000000000001U >> (uVar4 & 0x3f) & 1) == 0) {
      if ((0x2000000000002U >> (uVar4 & 0x3f) & 1) == 0) {
        if ((0x4000000000004U >> (uVar4 & 0x3f) & 1) == 0) goto LAB_00ba120d;
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(unaff_RDI + 0x34) = uVar3;
  }
LAB_00ba120d:
  uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(4,".snd");
  bVar5 = true;
  if (local_b8 == 0) {
    uVar6 = FUN_00ccdf50(uVar6,0x1c);
    bVar5 = true;
    if (local_a8 == 0) {
      uVar6 = FUN_00ccdf50(uVar6,0);
      bVar5 = true;
      if (local_98 == 0) {
        uVar6 = FUN_00ccdf50(uVar6,*(undefined4 *)(unaff_RDI + 0x4c));
        bVar5 = true;
        if (local_88 == 0) {
          uVar6 = FUN_00ccdf50(uVar6,*(undefined4 *)(unaff_RDI + 0x48));
          bVar5 = true;
          if (local_78 == 0) {
            FUN_00ccdf50(uVar6,*(undefined4 *)(unaff_RDI + 0x30));
            bVar5 = true;
            if (local_68 == 0) {
              uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(4,"    ");
              bVar5 = true;
              if (local_58 == 0) {
                (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(uVar6,unaff_RDI + 0x40);
                bVar5 = local_d0 != 0;
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
  if (bVar5) {
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


