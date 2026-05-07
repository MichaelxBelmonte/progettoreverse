// Function: FUN_01873700
// Address: 01873700
// Size: 978 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018738fd) */
/* WARNING: Removing unreachable block (ram,0x01873909) */
/* WARNING: Removing unreachable block (ram,0x0187385a) */
/* WARNING: Removing unreachable block (ram,0x0187388a) */
/* WARNING: Removing unreachable block (ram,0x0187388f) */
/* WARNING: Removing unreachable block (ram,0x01873897) */
/* WARNING: Removing unreachable block (ram,0x0187389c) */
/* WARNING: Removing unreachable block (ram,0x01873860) */
/* WARNING: Removing unreachable block (ram,0x01873865) */
/* WARNING: Removing unreachable block (ram,0x0187386d) */
/* WARNING: Removing unreachable block (ram,0x01873a26) */
/* WARNING: Removing unreachable block (ram,0x01873a2f) */
/* WARNING: Removing unreachable block (ram,0x018737e6) */
/* WARNING: Removing unreachable block (ram,0x018737ef) */
/* WARNING: Removing unreachable block (ram,0x0187378a) */
/* WARNING: Removing unreachable block (ram,0x01873793) */
/* WARNING: Removing unreachable block (ram,0x01873a5b) */
/* WARNING: Removing unreachable block (ram,0x01873a64) */

undefined8 * FUN_01873700(void)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  FUN_00d8ede0();
  local_48 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (*(int *)(*unaff_RSI + 0xc) < 1) {
    bVar3 = false;
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar8 = 0;
    puVar7 = (undefined8 *)0x0;
    bVar3 = false;
    do {
      FUN_00d8ede0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      plVar1 = *(longlong **)(*(longlong *)(*unaff_RSI + 0x10) + lVar8 * 8);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if ((*(int *)(plVar1[4] + 0xc) != 0) &&
         (lVar2 = *(longlong *)(**(longlong **)(plVar1[4] + 0x10) + 0x10), lVar2 != 0)) {
        FUN_00d50b00();
        FUN_018dd490();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar5 = (**(code **)(*local_40 + 0x50))();
      if (cVar5 == '\0') {
        if (puVar7 != (undefined8 *)0x0) {
          if (bVar3) {
            FUN_00d50b20();
          }
          bVar3 = false;
        }
        if (local_48 != local_40) {
          FUN_00d50b00();
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_48 = local_40;
        }
LAB_01873959:
        FUN_00d8ede0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar5 = (**(code **)(*local_40 + 0x50))();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 == '\0') {
          puVar7 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &DAT_02572358;
          (*pcVar4)();
          FUN_00d21140();
          bVar3 = true;
          goto LAB_01873a3d;
        }
        puVar7 = (undefined8 *)0x0;
      }
      else {
        if (puVar7 == (undefined8 *)0x0) goto LAB_01873959;
LAB_01873a3d:
        local_38 = '\0';
        FUN_00d21140();
        local_40 = plVar1;
      }
      FUN_00d50b20();
      FUN_00d50b20();
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(*unaff_RSI + 0xc));
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar3) && (puVar7 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


