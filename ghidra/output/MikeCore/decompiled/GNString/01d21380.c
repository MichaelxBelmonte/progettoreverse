// Function: FUN_01d21380
// Address: 01d21380
// Size: 826 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d2167d) */
/* WARNING: Removing unreachable block (ram,0x01d21689) */
/* WARNING: Removing unreachable block (ram,0x01d215c4) */
/* WARNING: Removing unreachable block (ram,0x01d215cd) */
/* WARNING: Removing unreachable block (ram,0x01d21543) */
/* WARNING: Removing unreachable block (ram,0x01d2154c) */
/* WARNING: Removing unreachable block (ram,0x01d21503) */
/* WARNING: Removing unreachable block (ram,0x01d2150c) */
/* WARNING: Removing unreachable block (ram,0x01d21584) */
/* WARNING: Removing unreachable block (ram,0x01d2158d) */
/* WARNING: Removing unreachable block (ram,0x01d21475) */
/* WARNING: Removing unreachable block (ram,0x01d21482) */
/* WARNING: Removing unreachable block (ram,0x01d213c7) */
/* WARNING: Removing unreachable block (ram,0x01d213d0) */
/* WARNING: Removing unreachable block (ram,0x01d21406) */
/* WARNING: Removing unreachable block (ram,0x01d2140f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d21380(undefined4 param_1)

{
  char cVar1;
  undefined8 *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  FUN_01d4ed90(_DAT_024202c0,param_1);
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d52700();
  FUN_01d52740();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar1 = FUN_01d53b40();
  if (cVar1 == '\0') {
    (**(code **)(*local_40 + 0x400))(0);
  }
  else {
    FUN_01cff4e0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d49110(0,DAT_02390124);
    FUN_01d49110(_DAT_023b45e0,DAT_02390124);
    FUN_01d49110(DAT_02390d34,DAT_02390124);
    FUN_01d49110(_DAT_023b5550,DAT_02390124);
    FUN_01cff4e0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d49110(_DAT_023b5570,DAT_02390124);
  }
  FUN_01d52770();
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


