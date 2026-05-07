// Function: FUN_00e08fe0
// Address: 00e08fe0
// Size: 1393 bytes
// Class: GNDistinction
// String references:
//   "Duration: %f ms"
//   "IOPlatformExpertDevice"
//   "SystemSerialNo: %@"


/* WARNING: Removing unreachable block (ram,0x00e094e2) */
/* WARNING: Removing unreachable block (ram,0x00e094ee) */

void FUN_00e08fe0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *unaff_RSI;
  undefined8 *puVar10;
  double dVar11;
  double local_b0;
  undefined8 *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  undefined8 *local_48;
  char local_40;
  
  FUN_00d8ede0();
  puVar9 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  if (lVar1 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    puVar10 = DAT_02785148;
    if (DAT_02785148 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    local_58 = puVar10;
    local_50 = local_50 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    local_b0 = (double)FUN_00e7d6f0();
  }
  _IOServiceMatching();
  iVar5 = _IOServiceGetMatchingService();
  bVar3 = true;
  bVar2 = true;
  puVar10 = puVar9;
  if (iVar5 != 0) {
    lVar7 = _IORegistryEntryCreateCFProperty(0,*(undefined8 *)PTR__kCFAllocatorDefault_024a98d8);
    _IOObjectRelease();
    if (lVar7 != 0) {
      FUN_00e1c780();
      puVar10 = local_58;
      if (puVar9 == local_58) {
LAB_00e09198:
        puVar10 = puVar9;
        if ((char)local_50 != '\0') {
LAB_00e0919e:
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if ((char)local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
            puVar9 = puVar10;
            goto LAB_00e09198;
          }
          if ((char)local_50 == '\0') goto LAB_00e091b1;
          goto LAB_00e0919e;
        }
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
LAB_00e091b1:
    if (puVar10 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x0;
      goto joined_r0x00e094fe;
    }
    iVar5 = FUN_00d8c7a0();
    if (iVar5 != 0) {
      uVar8 = FUN_00d8b910();
      FUN_00e07210(0x32,0x30,uVar8,*unaff_RSI != 0);
      puVar9 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
        }
        local_50 = local_50 & 0xffffff00;
        local_58 = puVar9;
        FUN_00d21140();
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (*unaff_RSI != 0) {
          local_50 = 1;
          local_58 = &DAT_024c5048;
          local_40 = 0;
          uVar8 = FUN_00d50b00();
          local_40 = '\x01';
          local_48 = puVar10;
          FUN_00d8cb40(uVar8,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          local_58 = &DAT_024c5048;
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          dVar11 = (double)FUN_00e7d6f0();
          local_48 = (undefined8 *)((dVar11 - local_b0) * DAT_023907c0);
          local_50 = 1;
          local_58 = (undefined8 *)&DAT_024de5e0;
          FUN_00d8cb40(local_48,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          uVar8 = FUN_00d92220();
          local_88 = local_68;
          local_80 = 0;
          if (local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              uVar8 = FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_80 = '\x01';
          FUN_00d95130(uVar8,&local_88);
          puVar4 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_58 = puVar4;
          local_50 = local_50 & 0xffffff00;
          FUN_00d21140();
          if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = false;
        bVar2 = false;
        goto joined_r0x00e094fe;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
joined_r0x00e094fe:
  if ((lVar1 != 0) && (bVar2 = bVar3, puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


