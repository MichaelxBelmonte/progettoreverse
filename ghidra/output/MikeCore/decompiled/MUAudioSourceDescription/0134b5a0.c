// Function: FUN_0134b5a0
// Address: 0134b5a0
// Size: 1452 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x0134bacf) */
/* WARNING: Removing unreachable block (ram,0x0134bad8) */
/* WARNING: Removing unreachable block (ram,0x0134b8ee) */
/* WARNING: Removing unreachable block (ram,0x0134b8f7) */
/* WARNING: Removing unreachable block (ram,0x0134ba91) */
/* WARNING: Removing unreachable block (ram,0x0134ba9e) */

undefined8 * FUN_0134b5a0(longlong *param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(unaff_RSI + 0x40);
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar1 = false;
    lVar9 = 0;
    bVar2 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar2 = false;
    lVar9 = 0;
    lVar8 = 0;
    bVar1 = false;
    do {
      pVar7 = (pthread_key_t)lVar8;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar11 * 8);
      if (lVar9 == lVar5) {
        if ((!bVar1) && (lVar9 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar9 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar9 = lVar5;
        }
        else {
          bVar1 = true;
          lVar9 = lVar5;
        }
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        if (param_3 == '\0') {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_0134b620;
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == 0) {
          if (*param_1 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (*param_2 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5500();
          if (lVar10 == local_50) {
            if ((bVar2) || (lVar10 == 0)) goto joined_r0x0134ba47;
            bVar2 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
              lVar5 = lVar10;
              goto LAB_0134ba0b;
            }
          }
          else if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            lVar5 = local_50;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
LAB_0134ba0b:
            bVar2 = true;
            lVar10 = lVar5;
joined_r0x0134ba47:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar2) && (lVar10 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar10 = local_50;
          }
          else {
            bVar2 = true;
            lVar10 = local_50;
          }
          local_48 = '\0';
          FUN_00d235a0();
          local_50 = lVar10;
        }
      }
LAB_0134b620:
      lVar11 = lVar11 + 1;
      lVar5 = *(longlong *)(unaff_RSI + 0x40);
      lVar8 = (longlong)*(int *)(lVar5 + 0xc);
    } while (lVar11 < lVar8);
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


