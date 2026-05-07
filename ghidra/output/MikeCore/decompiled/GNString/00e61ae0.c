// Function: FUN_00e61ae0
// Address: 00e61ae0
// Size: 2425 bytes
// Class: GNString
// String references:
//   "%s.plist"


/* WARNING: Removing unreachable block (ram,0x00e6229d) */
/* WARNING: Removing unreachable block (ram,0x00e622ad) */
/* WARNING: Removing unreachable block (ram,0x00e620b0) */
/* WARNING: Removing unreachable block (ram,0x00e620bc) */
/* WARNING: Removing unreachable block (ram,0x00e61ee6) */
/* WARNING: Removing unreachable block (ram,0x00e61ef2) */
/* WARNING: Removing unreachable block (ram,0x00e61d1c) */
/* WARNING: Removing unreachable block (ram,0x00e61d28) */
/* WARNING: Removing unreachable block (ram,0x00e61db7) */
/* WARNING: Removing unreachable block (ram,0x00e61dc3) */
/* WARNING: Removing unreachable block (ram,0x00e61f81) */
/* WARNING: Removing unreachable block (ram,0x00e61f8d) */
/* WARNING: Removing unreachable block (ram,0x00e6214b) */
/* WARNING: Removing unreachable block (ram,0x00e62157) */
/* WARNING: Removing unreachable block (ram,0x00e6236f) */
/* WARNING: Removing unreachable block (ram,0x00e6237b) */
/* WARNING: Removing unreachable block (ram,0x00e61c33) */
/* WARNING: Removing unreachable block (ram,0x00e61c3c) */
/* WARNING: Removing unreachable block (ram,0x00e62277) */
/* WARNING: Removing unreachable block (ram,0x00e62280) */
/* WARNING: Removing unreachable block (ram,0x00e623f2) */
/* WARNING: Removing unreachable block (ram,0x00e623fb) */

void FUN_00e61ae0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar8;
  longlong local_70;
  char local_68;
  longlong *local_60;
  uint local_58;
  undefined8 *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if ((DAT_028a8c58 != (longlong *)0x0) && (DAT_028a8c61 != '\0')) goto LAB_00e62322;
  FUN_00e8cb50();
  if (DAT_028a8c58 != (longlong *)0x0) {
    DAT_028a8c61 = '\x01';
    FUN_00e8cb70();
    goto LAB_00e62322;
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  bVar8 = DAT_028a8c58 == (longlong *)0x0;
  DAT_028a8c58 = plVar4;
  if (((bVar8) || (FUN_00d50b20(), DAT_028a8c58 != (longlong *)0x0)) && (DAT_028a8c60 == '\0')) {
    DAT_028a8c60 = '\x01';
    FUN_00e8cb90();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  local_50 = (undefined8 *)FUN_00003040();
  local_58 = 1;
  local_60 = &DAT_026ba3d0;
  FUN_00d8cb40(&DAT_026ba3d0,&local_60);
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02787818;
  if (DAT_02787818 != 0) {
    FUN_00d50b00();
  }
  FUN_00ce7810();
  plVar4 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_38 = plVar4;
  (**(code **)(*plVar4 + 0x400))();
  plVar2 = local_60;
  if (plVar4 == local_60) {
LAB_00e61cff:
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38 = plVar2;
      FUN_00d50b20();
      goto LAB_00e61cff;
    }
    local_38 = local_60;
    FUN_00d50b20();
    local_58 = local_58 & 0xffffff00;
    local_38 = plVar2;
  }
  plVar2 = local_38;
  (**(code **)(*local_38 + 0x400))();
  plVar4 = local_60;
  if (local_60 == plVar2) {
LAB_00e61d9a:
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38 = plVar4;
      FUN_00d50b20();
      goto LAB_00e61d9a;
    }
    local_38 = local_60;
    FUN_00d50b20();
    local_58 = local_58 & 0xffffff00;
    local_38 = plVar4;
  }
  local_60 = local_38;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00ce7ab0();
  plVar4 = local_60;
  if (local_60 == local_38) {
LAB_00e61e4c:
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (local_38 == (longlong *)0x0) {
        local_38 = plVar4;
      }
      else {
        local_38 = plVar4;
        FUN_00d50b20();
      }
      goto LAB_00e61e4c;
    }
    if (local_38 == (longlong *)0x0) {
      local_38 = local_60;
    }
    else {
      local_38 = local_60;
      FUN_00d50b20();
    }
  }
  plVar2 = local_38;
  (**(code **)(*local_38 + 0x400))();
  plVar4 = local_60;
  if (local_60 == plVar2) {
LAB_00e61ec9:
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38 = plVar4;
      FUN_00d50b20();
      goto LAB_00e61ec9;
    }
    local_38 = local_60;
    FUN_00d50b20();
    local_58 = local_58 & 0xffffff00;
    local_38 = plVar4;
  }
  plVar2 = local_38;
  (**(code **)(*local_38 + 0x400))();
  plVar4 = local_60;
  if (local_60 == plVar2) {
LAB_00e61f64:
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38 = plVar4;
      FUN_00d50b20();
      goto LAB_00e61f64;
    }
    local_38 = local_60;
    FUN_00d50b20();
    local_58 = local_58 & 0xffffff00;
    local_38 = plVar4;
  }
  local_60 = local_38;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00ce7730();
  plVar4 = local_60;
  if (local_60 == local_38) {
LAB_00e62016:
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (local_38 == (longlong *)0x0) {
        local_38 = plVar4;
      }
      else {
        local_38 = plVar4;
        FUN_00d50b20();
      }
      goto LAB_00e62016;
    }
    if (local_38 == (longlong *)0x0) {
      local_38 = local_60;
    }
    else {
      local_38 = local_60;
      FUN_00d50b20();
    }
  }
  plVar2 = local_38;
  (**(code **)(*local_38 + 0x400))();
  plVar4 = local_60;
  if (local_60 == plVar2) {
LAB_00e62093:
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38 = plVar4;
      FUN_00d50b20();
      goto LAB_00e62093;
    }
    local_38 = local_60;
    FUN_00d50b20();
    local_58 = local_58 & 0xffffff00;
    local_38 = plVar4;
  }
  plVar2 = local_38;
  (**(code **)(*local_38 + 0x400))();
  plVar4 = local_60;
  if (local_60 != plVar2) {
    if ((char)local_58 != '\0') {
      local_38 = local_60;
      FUN_00d50b20();
      local_58 = local_58 & 0xffffff00;
      local_38 = plVar4;
      goto LAB_00e62142;
    }
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38 = plVar4;
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00e62142:
  local_60 = local_38;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = local_58 & 0xffffff00;
  local_60 = (longlong *)0x0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_48._4_4_ = 0;
  bVar8 = false;
  local_50 = puVar5;
  do {
    if (local_48._4_4_ != 0) {
      if (local_48._4_4_ < 1) {
        iVar7 = -local_48._4_4_;
      }
      else {
        iVar7 = (int)local_48 - local_48._4_4_;
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        FUN_00d23690();
        local_40 = local_40 + local_48._4_4_;
        iVar7 = 0;
      }
      local_48 = CONCAT44(iVar7,(int)local_48);
    }
    lVar6 = (longlong)(int)local_48;
    iVar7 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar7);
    if (*(int *)((longlong)local_50 + 0xc) <= iVar7) {
      lVar6 = 0;
      goto LAB_00e622be;
    }
    local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
    cVar3 = (**(code **)(*local_60 + 0x398))();
    if (cVar3 != '\0') {
      FUN_00ca94c0();
      if (local_70 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = local_70;
        if (local_68 == '\0') {
          FUN_00d50b00();
          bVar8 = true;
        }
        else {
          local_68 = '\0';
          bVar8 = true;
        }
      }
      if (lVar6 != 0) break;
    }
  } while( true );
  FUN_00ca1b70();
  plVar2 = local_60;
  plVar4 = DAT_028a8c68;
  if (DAT_028a8c68 != local_60) {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    DAT_028a8c68 = plVar2;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((plVar2 != (longlong *)0x0) && (DAT_028a8c70 == '\0')) {
    DAT_028a8c70 = '\x01';
    FUN_00e8cb90();
  }
LAB_00e622be:
  FUN_00115910();
  if ((bVar8) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  DAT_028a8c61 = '\x01';
  FUN_00e8cb70();
LAB_00e62322:
  FUN_000175c0();
  plVar4 = local_60;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((char)local_58 == '\0') {
    if (local_60 == (longlong *)0x0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = plVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *unaff_RDI = local_60;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


