// Function: FUN_00d1fcc0
// Address: 00d1fcc0
// Size: 1118 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00d2001c) */
/* WARNING: Removing unreachable block (ram,0x00d1fef1) */
/* WARNING: Removing unreachable block (ram,0x00d1fefa) */
/* WARNING: Removing unreachable block (ram,0x00d1fd85) */
/* WARNING: Removing unreachable block (ram,0x00d1fd91) */
/* WARNING: Removing unreachable block (ram,0x00d1ffbf) */
/* WARNING: Removing unreachable block (ram,0x00d20043) */
/* WARNING: Removing unreachable block (ram,0x00d20050) */
/* WARNING: Removing unreachable block (ram,0x00d1fddb) */
/* WARNING: Removing unreachable block (ram,0x00d1fde4) */
/* WARNING: Removing unreachable block (ram,0x00d1fe59) */
/* WARNING: Removing unreachable block (ram,0x00d1fe66) */
/* WARNING: Removing unreachable block (ram,0x00d1fe9f) */
/* WARNING: Removing unreachable block (ram,0x00d1feac) */
/* WARNING: Removing unreachable block (ram,0x00d200a7) */
/* WARNING: Removing unreachable block (ram,0x00d200b0) */
/* WARNING: Removing unreachable block (ram,0x00d200be) */
/* WARNING: Removing unreachable block (ram,0x00d200ca) */

undefined8 * FUN_00d1fcc0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  longlong lVar3;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar3 = DAT_027756f0;
  if (DAT_027756f0 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00c82360();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      FUN_00c811e0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*local_40 + 0x20))();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_00c81830();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d243f0();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((longlong)puVar2 + 0xc)) {
        lVar3 = 0;
        do {
          lVar1 = *(longlong *)(puVar2[2] + lVar3 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d74120();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_000175c0();
          if (local_50 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 != 0) {
            FUN_00d74120();
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*local_40 + 0x80))();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)((longlong)puVar2 + 0xc));
      }
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return unaff_RDI;
}


