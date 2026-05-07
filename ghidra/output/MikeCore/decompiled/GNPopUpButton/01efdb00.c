// Function: FUN_01efdb00
// Address: 01efdb00
// Size: 602 bytes
// Class: GNPopUpButton


/* WARNING: Removing unreachable block (ram,0x01efdd12) */
/* WARNING: Removing unreachable block (ram,0x01efdd1b) */
/* WARNING: Removing unreachable block (ram,0x01efdc16) */
/* WARNING: Removing unreachable block (ram,0x01efdc22) */
/* WARNING: Removing unreachable block (ram,0x01efdc85) */
/* WARNING: Removing unreachable block (ram,0x01efdc8e) */
/* WARNING: Removing unreachable block (ram,0x01efdc01) */
/* WARNING: Removing unreachable block (ram,0x01efdc0a) */
/* WARNING: Removing unreachable block (ram,0x01efdcb1) */
/* WARNING: Removing unreachable block (ram,0x01efdcba) */
/* WARNING: Removing unreachable block (ram,0x01efdcd9) */
/* WARNING: Removing unreachable block (ram,0x01efdce2) */

void FUN_01efdb00(void)

{
  bool bVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong local_40;
  char local_38;
  
  pcVar2 = DAT_026b2b70;
  lVar3 = *unaff_RSI;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8);
      if (lVar3 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_00d50b00();
        lVar7 = lVar3;
      }
      FUN_01f01c90();
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else {
        lVar5 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
      }
      if (lVar5 == 0) {
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar4 = (longlong)&DAT_026b2b58;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        (*pcVar2)();
        (**(code **)(*plVar4 + 0x368))();
        (**(code **)(*plVar4 + 0x378))();
        FUN_01f01a30();
        bVar1 = true;
      }
      (**(code **)(*unaff_RDI + 0x648))();
      if ((lVar3 != 0) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if (bVar1) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar3 = *unaff_RSI;
    } while (lVar6 < *(int *)(lVar3 + 0xc));
  }
  (**(code **)(*unaff_RDI + 0x448))();
  (**(code **)(*unaff_RDI + 0x658))();
  (**(code **)(*unaff_RDI + 0x628))();
  return;
}


