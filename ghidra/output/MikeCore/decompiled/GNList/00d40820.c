// Function: FUN_00d40820
// Address: 00d40820
// Size: 745 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d40a4d) */
/* WARNING: Removing unreachable block (ram,0x00d40a59) */

void FUN_00d40820(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  char *pcVar6;
  longlong unaff_RDI;
  longlong lVar7;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong local_80;
  char local_78 [8];
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  FUN_00d3ecc0();
  local_48 = local_58;
  local_40 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_40 = '\x01';
  FUN_00d40f90();
  pcVar6 = local_38;
  if (local_78[0] != '\0') {
    pcVar6 = local_78;
  }
  local_38[0] = local_78[0];
  *pcVar6 = '\0';
  if ((local_78[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    if (*(int *)(local_80 + 0xc) != 0) {
      puVar5 = *(undefined8 **)(unaff_RDI + 0x48);
      if (*(int *)((longlong)puVar5 + 0xc) == 0) {
        FUN_00d50b00();
      }
      else {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
      }
      local_78[0] = '\0';
      FUN_00d243f0();
      if ((local_78[0] != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_78[0] = '\0';
      local_60 = 0;
      local_68 = 0;
      local_70 = puVar5;
      if (0 < *(int *)((longlong)puVar5 + 0xc)) {
        lVar7 = 0;
        do {
          lVar1 = *(longlong *)(puVar5[2] + lVar7 * 8);
          if (*(char *)(lVar1 + 0xc) != '\0') {
            plVar2 = *(longlong **)(lVar1 + 0x10);
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            cVar4 = FUN_00d50c10();
            if (cVar4 == '\0') {
              local_c8 = 0;
              local_c0 = 0;
              local_b8 = 0;
              local_b0 = 0;
              FUN_00d41040(&local_b8,&local_c8);
            }
            else {
              lVar1 = *(longlong *)(lVar1 + 0x18);
              if (lVar1 != 0) {
                FUN_00d3ecf0();
                lVar3 = local_58;
                if ((local_50 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
                if (lVar1 != lVar3) goto LAB_00d40ab3;
              }
              (**(code **)(*plVar2 + 0x78))();
            }
LAB_00d40ab3:
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          lVar7 = lVar7 + 1;
          local_68 = CONCAT44(local_68._4_4_,(int)lVar7);
        } while ((int)lVar7 < *(int *)((longlong)puVar5 + 0xc));
      }
      FUN_00d426f0();
      FUN_00d216c0();
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


