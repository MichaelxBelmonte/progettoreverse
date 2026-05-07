// Function: FUN_01933c70
// Address: 01933c70
// Size: 3382 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0193492b) */
/* WARNING: Removing unreachable block (ram,0x01934934) */
/* WARNING: Removing unreachable block (ram,0x01934866) */
/* WARNING: Removing unreachable block (ram,0x0193486f) */
/* WARNING: Removing unreachable block (ram,0x019347c6) */
/* WARNING: Removing unreachable block (ram,0x019347cf) */
/* WARNING: Removing unreachable block (ram,0x01934726) */
/* WARNING: Removing unreachable block (ram,0x0193472f) */
/* WARNING: Removing unreachable block (ram,0x01934686) */
/* WARNING: Removing unreachable block (ram,0x0193468f) */
/* WARNING: Removing unreachable block (ram,0x019345e6) */
/* WARNING: Removing unreachable block (ram,0x019345ef) */
/* WARNING: Removing unreachable block (ram,0x01934546) */
/* WARNING: Removing unreachable block (ram,0x0193454f) */
/* WARNING: Removing unreachable block (ram,0x019344a6) */
/* WARNING: Removing unreachable block (ram,0x019344af) */
/* WARNING: Removing unreachable block (ram,0x01934406) */
/* WARNING: Removing unreachable block (ram,0x0193440f) */
/* WARNING: Removing unreachable block (ram,0x01934366) */
/* WARNING: Removing unreachable block (ram,0x0193436f) */
/* WARNING: Removing unreachable block (ram,0x019342c6) */
/* WARNING: Removing unreachable block (ram,0x019342cf) */
/* WARNING: Removing unreachable block (ram,0x01934226) */
/* WARNING: Removing unreachable block (ram,0x0193422f) */
/* WARNING: Removing unreachable block (ram,0x01934186) */
/* WARNING: Removing unreachable block (ram,0x0193418f) */
/* WARNING: Removing unreachable block (ram,0x019340e6) */
/* WARNING: Removing unreachable block (ram,0x019340ef) */
/* WARNING: Removing unreachable block (ram,0x01934046) */
/* WARNING: Removing unreachable block (ram,0x0193404f) */
/* WARNING: Removing unreachable block (ram,0x01933fa6) */
/* WARNING: Removing unreachable block (ram,0x01933faf) */
/* WARNING: Removing unreachable block (ram,0x01933f06) */
/* WARNING: Removing unreachable block (ram,0x01933f0f) */
/* WARNING: Removing unreachable block (ram,0x01933e66) */
/* WARNING: Removing unreachable block (ram,0x01933e6f) */
/* WARNING: Removing unreachable block (ram,0x01933dc6) */
/* WARNING: Removing unreachable block (ram,0x01933dcf) */
/* WARNING: Removing unreachable block (ram,0x01933d76) */
/* WARNING: Removing unreachable block (ram,0x01933d7f) */
/* WARNING: Removing unreachable block (ram,0x01933e16) */
/* WARNING: Removing unreachable block (ram,0x01933e1f) */
/* WARNING: Removing unreachable block (ram,0x01933eb6) */
/* WARNING: Removing unreachable block (ram,0x01933ebf) */
/* WARNING: Removing unreachable block (ram,0x01933f56) */
/* WARNING: Removing unreachable block (ram,0x01933f5f) */
/* WARNING: Removing unreachable block (ram,0x01933ff6) */
/* WARNING: Removing unreachable block (ram,0x01933fff) */
/* WARNING: Removing unreachable block (ram,0x01934096) */
/* WARNING: Removing unreachable block (ram,0x0193409f) */
/* WARNING: Removing unreachable block (ram,0x01934136) */
/* WARNING: Removing unreachable block (ram,0x0193413f) */
/* WARNING: Removing unreachable block (ram,0x019341d6) */
/* WARNING: Removing unreachable block (ram,0x019341df) */
/* WARNING: Removing unreachable block (ram,0x01934276) */
/* WARNING: Removing unreachable block (ram,0x0193427f) */
/* WARNING: Removing unreachable block (ram,0x01934316) */
/* WARNING: Removing unreachable block (ram,0x0193431f) */
/* WARNING: Removing unreachable block (ram,0x019343b6) */
/* WARNING: Removing unreachable block (ram,0x019343bf) */
/* WARNING: Removing unreachable block (ram,0x01934456) */
/* WARNING: Removing unreachable block (ram,0x0193445f) */
/* WARNING: Removing unreachable block (ram,0x019344f6) */
/* WARNING: Removing unreachable block (ram,0x019344ff) */
/* WARNING: Removing unreachable block (ram,0x01934596) */
/* WARNING: Removing unreachable block (ram,0x0193459f) */
/* WARNING: Removing unreachable block (ram,0x01934636) */
/* WARNING: Removing unreachable block (ram,0x0193463f) */
/* WARNING: Removing unreachable block (ram,0x019346d6) */
/* WARNING: Removing unreachable block (ram,0x019346df) */
/* WARNING: Removing unreachable block (ram,0x01934776) */
/* WARNING: Removing unreachable block (ram,0x0193477f) */
/* WARNING: Removing unreachable block (ram,0x01934816) */
/* WARNING: Removing unreachable block (ram,0x0193481f) */
/* WARNING: Removing unreachable block (ram,0x019348b6) */
/* WARNING: Removing unreachable block (ram,0x019348bf) */
/* WARNING: Removing unreachable block (ram,0x01934987) */
/* WARNING: Removing unreachable block (ram,0x01934990) */

undefined4 FUN_01933c70(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong local_50;
  char local_48;
  
  if ((DAT_028b0c58 == (undefined8 *)0x0) || (DAT_028b0c61 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0c58 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028b0c58 == puVar6) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = DAT_028b0c58 != (undefined8 *)0x0;
        DAT_028b0c58 = puVar6;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0c60 == '\0') {
        DAT_028b0c60 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027e7ca0;
      if (DAT_027e7ca0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027f2a20;
      if (DAT_027f2a20 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026de8c8;
      if (DAT_026de8c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026de8d8;
      if (DAT_026de8d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02725a10;
      if (DAT_02725a10 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deb58;
      if (DAT_026deb58 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026fb860;
      if (DAT_026fb860 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026debd0;
      if (DAT_026debd0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026debc0;
      if (DAT_026debc0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026fb858;
      if (DAT_026fb858 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026debc8;
      if (DAT_026debc8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deb70;
      if (DAT_026deb70 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deb78;
      if (DAT_026deb78 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deb80;
      if (DAT_026deb80 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deb88;
      if (DAT_026deb88 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deb90;
      if (DAT_026deb90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deb98;
      if (DAT_026deb98 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deba0;
      if (DAT_026deba0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deba8;
      if (DAT_026deba8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026debe0;
      if (DAT_026debe0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026debf0;
      if (DAT_026debf0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026debb0;
      if (DAT_026debb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026debb8;
      if (DAT_026debb8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027e0910;
      if (DAT_027e0910 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027e0918;
      if (DAT_027e0918 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deb60;
      if (DAT_026deb60 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026deb68;
      if (DAT_026deb68 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026dec08;
      if (DAT_026dec08 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026dec10;
      if (DAT_026dec10 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026dec18;
      if (DAT_026dec18 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026dec20;
      if (DAT_026dec20 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026dec28;
      if (DAT_026dec28 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026dec30;
      if (DAT_026dec30 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026dea68;
      if (DAT_026dea68 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027e0920;
      if (DAT_027e0920 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027e0928;
      if (DAT_027e0928 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026dea78;
      if (DAT_026dea78 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b0c61 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0c61 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01cae990();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  cVar4 = FUN_00d23d70();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    uVar5 = FUN_019ec4c0();
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


