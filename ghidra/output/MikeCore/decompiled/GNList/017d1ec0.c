// Function: FUN_017d1ec0
// Address: 017d1ec0
// Size: 508 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x017d1fb8) */
/* WARNING: Removing unreachable block (ram,0x017d1f72) */
/* WARNING: Removing unreachable block (ram,0x017d1f7b) */
/* WARNING: Removing unreachable block (ram,0x017d2032) */
/* WARNING: Removing unreachable block (ram,0x017d2037) */
/* WARNING: Removing unreachable block (ram,0x017d2042) */
/* WARNING: Removing unreachable block (ram,0x017d204b) */

undefined4 FUN_017d1ec0(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong *local_68;
  char local_60;
  
  if ((DAT_028af448 == (longlong *)0x0) || (DAT_028af451 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af448 == (longlong *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_017d1b50();
      if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00c6d890();
      plVar4 = DAT_028af448;
      if (DAT_028af448 != local_68) {
        if (local_68 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar4 = local_68;
        }
        bVar1 = DAT_028af448 != (longlong *)0x0;
        DAT_028af448 = plVar4;
        if (bVar1) {
          FUN_00d50b20();
          plVar4 = local_68;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (DAT_028af450 == '\0')) {
        DAT_028af450 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d50b20();
      DAT_028af451 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af451 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar4 = DAT_028af448;
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  uVar2 = (**(code **)(*plVar4 + 0x368))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return uVar2;
}


