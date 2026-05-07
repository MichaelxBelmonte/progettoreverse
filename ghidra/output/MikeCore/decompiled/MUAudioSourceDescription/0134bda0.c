// Function: FUN_0134bda0
// Address: 0134bda0
// Size: 830 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x0134c0a0) */
/* WARNING: Removing unreachable block (ram,0x0134c0ad) */
/* WARNING: Removing unreachable block (ram,0x0134c025) */
/* WARNING: Removing unreachable block (ram,0x0134c032) */

undefined8 * FUN_0134bda0(undefined8 param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  bool bVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  longlong local_50;
  char local_48;
  longlong local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar6 = *(longlong *)(unaff_RSI + 0x40);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    local_38 = 0;
    bVar9 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar9 = false;
    local_38 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      pVar7 = (pthread_key_t)lVar8;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar11 * 8);
      if (local_38 == lVar6) {
        if ((!bVar2) && (local_38 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_38 = lVar6;
        }
        else {
          bVar2 = true;
          local_38 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar7 = (pthread_key_t)local_38;
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (pthread_key_t)local_38;
        }
        FUN_013de560();
        if (local_50 == lVar10) {
          lVar6 = lVar10;
          bVar1 = bVar9;
          if ((!bVar9) && (local_50 != 0)) {
            bVar1 = true;
            if (local_48 != '\0') goto LAB_0134c000;
            FUN_00d50b00();
            bVar1 = true;
          }
LAB_0134bfec:
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = local_50;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar9) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0134bfec;
          }
          bVar1 = true;
          if ((bVar9) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_0134c000:
        lVar10 = lVar6;
        bVar9 = bVar1;
        if (param_2 == '\0') {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if (cVar3 == '\0') {
            local_48 = '\0';
            FUN_00d21140();
            local_50 = lVar6;
          }
        }
        else {
          local_48 = '\0';
          FUN_00d21140();
          local_50 = lVar6;
        }
      }
      lVar11 = lVar11 + 1;
      lVar6 = *(longlong *)(unaff_RSI + 0x40);
      lVar8 = (longlong)*(int *)(lVar6 + 0xc);
    } while (lVar11 < lVar8);
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


