// Function: FUN_01ccc2f0
// Address: 01ccc2f0
// Size: 596 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01ccc4a2) */
/* WARNING: Removing unreachable block (ram,0x01ccc4c8) */
/* WARNING: Removing unreachable block (ram,0x01ccc4cd) */
/* WARNING: Removing unreachable block (ram,0x01ccc4d5) */
/* WARNING: Removing unreachable block (ram,0x01ccc4da) */
/* WARNING: Removing unreachable block (ram,0x01ccc4a8) */
/* WARNING: Removing unreachable block (ram,0x01ccc4ad) */
/* WARNING: Removing unreachable block (ram,0x01ccc4b8) */
/* WARNING: Removing unreachable block (ram,0x01ccc45f) */
/* WARNING: Removing unreachable block (ram,0x01ccc468) */

undefined8 * FUN_01ccc2f0(ulonglong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *unaff_RDI;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  local_90 = *param_2;
  local_88 = 0;
  FUN_01ccab60(param_1,&local_90);
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01ccc387;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01ccc387:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_01cc98b0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccc3ac;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01ccc3ac:
    lVar1 = local_40[5];
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_70 = local_40;
      local_68 = '\0';
      FUN_01d26d00(param_1 & 0xffffffff,&local_70);
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_80 = *param_2;
      local_78 = 0;
      FUN_01ccac20();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01ccc47c;
        }
      }
      else if (local_40 != (longlong *)0x0) {
LAB_01ccc47c:
        local_60 = local_40;
        local_58 = '\0';
        (**(code **)(*local_40 + 0x370))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      goto LAB_01ccc528;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01ccc528:
  FUN_00d50b20();
  return unaff_RDI;
}


