// Function: FUN_01db3c20
// Address: 01db3c20
// Size: 968 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x01db3dee) */
/* WARNING: Removing unreachable block (ram,0x01db3e17) */
/* WARNING: Removing unreachable block (ram,0x01db3e1c) */
/* WARNING: Removing unreachable block (ram,0x01db3e24) */
/* WARNING: Removing unreachable block (ram,0x01db3e29) */
/* WARNING: Removing unreachable block (ram,0x01db3df2) */
/* WARNING: Removing unreachable block (ram,0x01db3e36) */
/* WARNING: Removing unreachable block (ram,0x01db3df7) */
/* WARNING: Removing unreachable block (ram,0x01db3d5e) */
/* WARNING: Removing unreachable block (ram,0x01db3d82) */
/* WARNING: Removing unreachable block (ram,0x01db3d87) */
/* WARNING: Removing unreachable block (ram,0x01db3d8f) */
/* WARNING: Removing unreachable block (ram,0x01db3d62) */
/* WARNING: Removing unreachable block (ram,0x01db3e94) */
/* WARNING: Removing unreachable block (ram,0x01db3ec3) */
/* WARNING: Removing unreachable block (ram,0x01db3ec8) */
/* WARNING: Removing unreachable block (ram,0x01db3ed0) */
/* WARNING: Removing unreachable block (ram,0x01db3e98) */

void FUN_01db3c20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong lVar3;
  float fVar4;
  longlong local_80;
  char local_78;
  float local_6c;
  float local_58;
  float local_44;
  longlong local_40;
  char local_38;
  
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  local_58 = (float)param_2;
  FUN_01db3950();
  FUN_01db2340();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01db3fd4;
    FUN_00d50b00();
    iVar1 = *(int *)(local_40 + 0xc);
  }
  else {
    if (local_40 == 0) goto LAB_01db3fd4;
    iVar1 = *(int *)(local_40 + 0xc);
  }
  if (iVar1 == 0) goto LAB_01db3fd4;
  FUN_01e3f820();
  if (*(char *)(unaff_RDI + 0x138) == '\0') {
    local_58 = fVar4;
  }
  local_6c = (float)FUN_01db1e30();
  FUN_01db2340();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01db3d24;
    FUN_00d50b00();
LAB_01db3cf1:
    local_44 = 0.0;
    if (*(int *)(local_40 + 0xc) != 0) {
      local_44 = (float)(*(int *)(local_40 + 0xc) + -1) * DAT_023b36b0;
    }
    FUN_00d50b20();
  }
  else {
    if (local_40 != 0) goto LAB_01db3cf1;
LAB_01db3d24:
    local_44 = 0.0;
  }
  local_58 = (local_58 - local_6c) - local_44;
  if ((local_58 != 0.0) || (NAN(local_58))) {
    FUN_01db1f60();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      local_58 = (float)FUN_01db2dc0(local_58);
    }
    if ((local_58 != 0.0) || (NAN(local_58))) {
      FUN_01db24f0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        lVar3 = 0;
      }
      else {
        do {
          local_58 = (float)FUN_01db2dc0(local_58);
          if ((((local_58 != DAT_0239424c) || (NAN(local_58) || NAN(DAT_0239424c))) &&
              (FUN_01db24f0(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        } while (((local_58 != DAT_0239424c) || (NAN(local_58) || NAN(DAT_0239424c))) &&
                (local_40 != 0));
      }
    }
  }
  FUN_01db2b50();
  FUN_01db28c0();
  FUN_00d403d0();
  lVar2 = DAT_027f22b8;
  if (DAT_027f22b8 != 0) {
    FUN_00d50b00();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffff98,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_01db3fd4:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


