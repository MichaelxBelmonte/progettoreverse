// Function: FUN_01e1b750
// Address: 01e1b750
// Size: 1863 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e1b79d) */
/* WARNING: Removing unreachable block (ram,0x01e1b7aa) */
/* WARNING: Removing unreachable block (ram,0x01e1bcf8) */
/* WARNING: Removing unreachable block (ram,0x01e1bb17) */
/* WARNING: Removing unreachable block (ram,0x01e1ba32) */
/* WARNING: Removing unreachable block (ram,0x01e1ba3b) */
/* WARNING: Removing unreachable block (ram,0x01e1bc13) */
/* WARNING: Removing unreachable block (ram,0x01e1bc1c) */
/* WARNING: Removing unreachable block (ram,0x01e1bdf4) */
/* WARNING: Removing unreachable block (ram,0x01e1bdfd) */

void FUN_01e1b750(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar5;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_38;
  char local_30;
  
  FUN_01e4b1a0();
  plVar4 = DAT_028b9468;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01e1be76;
    }
  }
  else if (local_38 != (longlong *)0x0) goto LAB_01e1be76;
  if (DAT_028b9460 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if ((DAT_028b9468 == (longlong *)0x0) || (DAT_028b9471 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b9468 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar4 + 0x18))();
      if (DAT_028b9468 == plVar4) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        bVar5 = DAT_028b9468 != (longlong *)0x0;
        DAT_028b9468 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b9470 == '\0') {
        DAT_028b9470 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01d5e5a0();
      FUN_01d5e5c0();
      lVar3 = DAT_027f3318;
      if (DAT_027f3318 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027f3320;
      if (DAT_027f3320 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar2;
      local_170 = '\x01';
      local_168 = 0;
      local_160 = '\0';
      FUN_00d31230(&local_168,&local_178);
      lVar2 = DAT_027e7ca0;
      if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b00();
        lVar2 = DAT_027e7ca0;
      }
      DAT_027e7ca0 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_150 = '\x01';
      local_148 = 0;
      local_140 = '\0';
      local_158 = lVar2;
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      FUN_01d5da60(&local_148,&local_158,&stack0xffffffffffffff68);
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027f3318;
      if (DAT_027f3318 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027f3328;
      local_138 = lVar3;
      local_130 = '\x01';
      if (DAT_027f3328 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar2;
      local_120 = '\x01';
      local_118 = 0;
      local_110 = '\0';
      FUN_00d31230(&local_118,&local_128);
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027f2a20;
      if (DAT_027f2a20 != 0) {
        FUN_00d50b00();
      }
      local_100 = '\x01';
      local_f8 = 0;
      local_f0 = '\0';
      local_108 = lVar3;
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      FUN_01d5da60(&local_f8,&local_108,&stack0xffffffffffffff78);
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027f3318;
      if (DAT_027f3318 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027f3330;
      local_e8 = lVar3;
      local_e0 = '\x01';
      if (DAT_027f3330 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar2;
      local_d0 = '\x01';
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d31230(&local_c8,&local_d8);
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_026de8c8;
      if (DAT_026de8c8 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      local_b8 = lVar3;
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      FUN_01d5da60(&local_a8,&local_b8,&stack0xffffffffffffff88);
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b9471 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b9471 = '\x01';
      FUN_00e8cb70();
    }
    local_38 = DAT_028b9468;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      goto LAB_01e1be76;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_38 = plVar4;
  }
  FUN_00d50b00();
LAB_01e1be76:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


