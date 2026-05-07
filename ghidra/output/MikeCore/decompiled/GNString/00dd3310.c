// Function: FUN_00dd3310
// Address: 00dd3310
// Size: 2243 bytes
// Class: GNString
// String references:
//   "%@updateCheck?%@"


/* WARNING: Removing unreachable block (ram,0x00dd3728) */
/* WARNING: Removing unreachable block (ram,0x00dd3734) */
/* WARNING: Removing unreachable block (ram,0x00dd3387) */
/* WARNING: Removing unreachable block (ram,0x00dd338c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00dd3310(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong unaff_RDI;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong local_168;
  char local_160;
  undefined8 *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  undefined8 *local_128;
  char local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  byte local_c0;
  undefined8 *local_b8;
  char local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_c0 = 0;
  local_c8 = 0;
  FUN_00da5ad0();
  local_b0 = local_88 != '\0';
  local_b8 = local_90;
  if ((bool)local_b0) {
    local_88 = '\0';
  }
  local_a8 = FUN_00da7170();
  uVar7 = FUN_00da7180();
  if (local_b8 == (undefined8 *)0x0) {
    uVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    local_40 = 0;
    do {
      local_48 = lVar5;
      uVar7 = FUN_00e67a40(uVar7,1);
      local_50 = local_90;
      if ((((local_88 == '\0') && (local_90 != (undefined8 *)0x0)) &&
          (uVar7 = FUN_00d50b00(), local_88 != '\0')) && (local_90 != (undefined8 *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      lVar5 = DAT_02783f30;
      if (DAT_02783f30 != 0) {
        uVar7 = FUN_00d50b00();
      }
      puVar1 = DAT_02783f38;
      if (DAT_02783f38 != (undefined8 *)0x0) {
        uVar7 = FUN_00d50b00();
      }
      local_90 = puVar1;
      local_88 = '\0';
      uVar7 = FUN_00ca0840(uVar7,&local_90);
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      if (puVar1 != (undefined8 *)0x0) {
        uVar7 = FUN_00d50b20();
      }
      if (lVar5 != 0) {
        uVar7 = FUN_00d50b20();
      }
      local_f0 = 0;
      lVar5 = *(longlong *)(unaff_RDI + 0x80);
      if (lVar5 != 0) {
        uVar7 = FUN_00d50b00();
      }
      puVar1 = DAT_02783f40;
      local_f0 = '\x01';
      local_f8 = lVar5;
      if (DAT_02783f40 != (undefined8 *)0x0) {
        uVar7 = FUN_00d50b00();
      }
      local_90 = puVar1;
      local_88 = '\0';
      FUN_00ca0840(uVar7,&local_90);
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = DAT_02787870;
      if (DAT_02787870 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027855b8;
      if (DAT_027855b8 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027d2068;
      if (DAT_027d2068 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar5;
      local_118 = lVar2;
      local_110 = lVar3;
      FUN_002bd7b0(&local_110,&local_118,3);
      FUN_000b6830();
      local_d8 = local_a0;
      local_d0 = 0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_d0 = '\x01';
      FUN_00e600c0();
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      local_90 = (undefined8 *)&DAT_025df260;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_90 = (undefined8 *)&DAT_0253d630;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_90 = &DAT_024c5048;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      FUN_00e69510();
      lVar5 = DAT_02787880;
      if (DAT_02787880 != 0) {
        FUN_00d50b00();
      }
      local_118 = local_108;
      local_110 = lVar5;
      uVar7 = FUN_00083ea0(2,&local_110);
      FUN_00d8cb40(uVar7,&local_90);
      lVar2 = local_a0;
      if (local_98 == '\0') {
        if (((local_a0 != 0) && (FUN_00d50b00(), local_98 != '\0')) && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_98 = '\0';
      }
      local_90 = (undefined8 *)&DAT_0253d630;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_90 = &DAT_024c5048;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      local_168 = lVar2;
      local_160 = '\0';
      local_158 = local_50;
      local_150 = '\0';
      uVar7 = *(undefined8 *)(unaff_RDI + 0x88);
      local_e0 = 0;
      FUN_00d50b00();
      local_e0 = '\x01';
      local_e8 = unaff_RDI;
      FUN_00e69550(uVar7,&local_168,&local_e8);
      puVar1 = local_90;
      if (local_88 == '\0') {
        if (((local_90 != (undefined8 *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
           (local_90 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = '\0';
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      cVar4 = FUN_00e34a50();
      if (cVar4 != '\0') {
        FUN_00e34a60();
      }
      cVar4 = FUN_00e34240();
      uVar6 = local_40;
      lVar5 = local_48;
      if ((cVar4 == '\0') &&
         (uVar7 = FUN_00dd28a0(), uVar6 = local_40, lVar5 = local_48, local_c8 != 0)) {
        local_148 = local_c8;
        local_140 = '\0';
        local_138 = local_50;
        local_130 = '\0';
        local_128 = puVar1;
        local_120 = '\0';
        FUN_00e6a750(uVar7,&local_128);
        if ((local_120 != '\0') && (local_128 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        FUN_00e34a70();
        lVar5 = local_c8;
        uVar6 = (ulonglong)local_c0;
        if (local_c8 == local_48) {
          uVar6 = local_40;
          lVar5 = local_48;
          if (((local_c0 != 0) && ((char)local_40 == '\0')) && (local_c8 != 0)) {
            FUN_00d50b00();
            uVar6 = 1;
            lVar5 = local_48;
          }
        }
        else {
          if ((local_c0 != 0) && (local_c8 != 0)) {
            FUN_00d50b00();
          }
          if (((char)local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_48 = lVar5;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      lVar5 = local_48;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_00da7180();
      if (local_b8 == (undefined8 *)0x0) break;
      local_b8 = (undefined8 *)0x0;
      if (local_b0 == '\0') {
        local_b0 = '\0';
        break;
      }
      uVar7 = FUN_00d50b20();
      local_b0 = '\0';
      local_40 = uVar6 & 0xffffffff;
    } while (local_b8 != (undefined8 *)0x0);
  }
  local_b8 = (undefined8 *)0x0;
  if ((local_c0 != 0) && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar5 != 0) && (FUN_00e971f0(), (char)uVar6 != '\0')) {
    FUN_00d50b20();
  }
  return;
}


