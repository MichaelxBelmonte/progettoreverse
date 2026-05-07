// Function: FUN_00e5a070
// Address: 00e5a070
// Size: 673 bytes
// Class: MUST
// String references:
//   "object of unknown class '%@' is being referred to during unarchiving. This MUST be dealt with in un...


/* WARNING: Removing unreachable block (ram,0x00e5a0b5) */
/* WARNING: Removing unreachable block (ram,0x00e5a0c1) */
/* WARNING: Removing unreachable block (ram,0x00e5a1b2) */
/* WARNING: Removing unreachable block (ram,0x00e5a1be) */

void FUN_00e5a070(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined4 local_74;
  undefined8 *local_70;
  char local_68 [8];
  longlong local_60;
  char local_58;
  int local_3c;
  char local_38 [8];
  
  cVar5 = FUN_00e58720();
  if ((cVar5 == '\0') || (FUN_00dab510(), local_3c == -1)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00e579d0();
  puVar4 = local_70;
  pcVar7 = local_38;
  if (local_68[0] != '\0') {
    pcVar7 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar7 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 == DAT_028a8c48) {
    lVar1 = *(longlong *)
             (*(longlong *)(unaff_RSI[0xb] + 0x10) +
             (longlong)*(int *)(*(longlong *)(unaff_RSI[0xe] + 0x10) + (longlong)local_3c * 4) * 8);
    local_74 = (**(code **)(*unaff_RSI + 0x598))();
    lVar3 = DAT_027815a8;
    plVar2 = (longlong *)unaff_RSI[0x16];
    if (plVar2 == (longlong *)0x0) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar3;
      local_80 = '\x01';
      local_68[0] = '\x01';
      local_68[1] = '\0';
      local_68[2] = '\0';
      local_68[3] = '\0';
      local_70 = &DAT_024c5048;
      local_58 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar1;
      FUN_00cc7b40();
      local_70 = &DAT_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      local_90 = '\0';
      local_98 = lVar1;
      (**(code **)(*plVar2 + 0x30))(local_74,&local_98);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RSI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar6 = (undefined8 *)0x0;
      goto LAB_00e5a2f4;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  puVar6 = puVar4;
  if ((local_38[0] == '\0') && (puVar6 = (undefined8 *)0x0, puVar4 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    puVar6 = puVar4;
  }
LAB_00e5a2f4:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


