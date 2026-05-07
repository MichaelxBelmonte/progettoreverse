// Function: FUN_01d67820
// Address: 01d67820
// Size: 893 bytes
// Class: GNMenuItem
// String references:
//   "%s.%s"


void FUN_01d67820(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_00d6f370();
  local_b8 = DAT_027f09d8;
  if (DAT_027f09d8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d710b0(&local_a8,&local_b8);
  plVar1 = local_78;
  if ((char)local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_70 = local_70 & 0xffffff00;
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    uVar5 = FUN_00003050();
    local_60 = FUN_00003060();
    local_70 = 2;
    local_78 = &DAT_02685078;
    local_68 = uVar5;
    FUN_00d8cb40(&DAT_02685078,&local_78);
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto LAB_01d67b82;
    }
  }
  iVar4 = FUN_000030b0();
  if (iVar4 == 2) {
LAB_01d67a5c:
    FUN_00d6f370();
    plVar2 = local_38;
    uVar5 = FUN_00003050();
    local_60 = FUN_00003060();
    local_70 = 2;
    local_78 = &DAT_02685078;
    local_68 = uVar5;
    FUN_00d8cb40(&DAT_02685078,&local_78);
    local_48 = local_88;
    local_40 = 0;
    local_98 = DAT_027f09d8;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
        local_98 = DAT_027f09d8;
      }
    }
    else {
      local_80 = '\0';
    }
    local_40 = '\x01';
    DAT_027f09d8 = local_98;
    if (local_98 != 0) {
      local_40 = '\x01';
      FUN_00d50b00();
    }
    local_90 = '\x01';
    (**(code **)(*plVar2 + 0x80))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_78 + 0x550))();
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_01d67a5c;
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_000161a0();
    *puVar6 = &DAT_02684aa0;
    puVar6[0xe] = 0;
    FUN_00d500e0();
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
LAB_01d67b82:
  FUN_00d50b20();
  return;
}


