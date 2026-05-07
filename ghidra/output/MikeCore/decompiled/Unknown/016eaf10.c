// Function: FUN_016eaf10
// Address: 016eaf10
// Size: 2064 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x016eb067) */
/* WARNING: Removing unreachable block (ram,0x016eb077) */
/* WARNING: Removing unreachable block (ram,0x016eb686) */
/* WARNING: Removing unreachable block (ram,0x016eb692) */

void FUN_016eaf10(undefined8 param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  void *pvVar9;
  int extraout_var;
  ulonglong uVar10;
  int extraout_var_00;
  undefined8 *puVar11;
  undefined8 uVar12;
  pthread_key_t pVar13;
  code *pcVar14;
  char *pcVar15;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  pthread_key_t pVar16;
  code *pcVar17;
  longlong local_98;
  char local_90;
  code *local_50;
  char local_48 [12];
  undefined4 local_3c;
  char local_38 [8];
  
  pVar13 = (pthread_key_t)param_1;
  pcVar17 = local_50;
  if (*unaff_RSI == 0) {
    pvVar9 = _pthread_getspecific(pVar13);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    FUN_016ebac0();
    if (local_50 == (code *)0x0) {
      pcVar17 = (code *)0x0;
      bVar3 = false;
    }
    else if (local_48[0] == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_48[0] != '\0') && (local_50 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
      bVar3 = true;
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar9 = _pthread_getspecific(pVar13);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901690();
    if (local_50 == (code *)0x0) {
      pcVar17 = (code *)0x0;
      bVar3 = false;
    }
    else if (local_48[0] == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_48[0] != '\0') && (local_50 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
      bVar3 = true;
    }
  }
  if (pcVar17 != (code *)0x0) {
    if (2 < *(int *)(pcVar17 + 0xc)) {
      pcVar14 = DAT_02572370;
      pcVar4 = DAT_02572370;
      if (*(longlong *)(unaff_RDI + 0x78) != 0) {
        pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_019079b0();
        pcVar14 = DAT_02572370;
        pcVar4 = DAT_02572370;
        if (((extraout_var != 0) && (uVar10 >> 0x20 != 0)) &&
           (cVar6 = FUN_00e7c020(), pcVar14 = DAT_02572370, pcVar4 = DAT_02572370, cVar6 == '\0')) {
          pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          FUN_00d23340();
          pVar16 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_48[0]);
          pcVar15 = local_38;
          if (local_48[0] != '\0') {
            pcVar15 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar15 = '\0';
          if ((local_48[0] != '\0') && (local_50 != (code *)0x0)) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific(pVar16);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_019079b0();
          bVar7 = 0;
          if ((extraout_var_00 != 0) && (bVar7 = 0, uVar10 >> 0x20 != 0)) {
            bVar7 = FUN_00e7c020();
            bVar7 = bVar7 ^ 1;
          }
          if ((local_38[0] != '\0') && (local_50 != (code *)0x0)) {
            FUN_00d50b20();
          }
          pcVar14 = DAT_02572370;
          pcVar4 = DAT_02572370;
          if ((bVar7 != 0) && (*(longlong *)(unaff_RDI + 0x78) != 0)) {
            FUN_00d64850();
            if (*(longlong *)(unaff_RDI + 0x78) != 0) {
              *(longlong *)(unaff_RDI + 0x78) = 0;
              FUN_00d50b20();
            }
            FUN_00d64910();
            pcVar14 = DAT_02572370;
            pcVar4 = DAT_02572370;
          }
        }
      }
      while (pcVar5 = local_50, pVar16 = (pthread_key_t)pcVar14, *(int *)(pcVar17 + 0xc) != 0) {
        puVar11 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar11 = &DAT_02572358;
        (*pcVar4)();
        pvVar9 = _pthread_getspecific((pthread_key_t)pcVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        FUN_016d5810();
        if ((local_48[0] == '\0') && (local_50 != (code *)0x0)) {
          FUN_00d50b00();
        }
        uVar12 = FUN_016ebbb0();
        pVar16 = (pthread_key_t)pcVar14;
        if (local_48[0] == '\0') {
          if (local_50 == (code *)0x0) goto LAB_016eb550;
          FUN_00d50b00();
LAB_016eb43e:
          pvVar9 = _pthread_getspecific(pVar16);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar12 = FUN_01909dc0();
          FUN_016d7110(0,uVar12);
          pcVar14 = local_50;
          if (local_50 == (code *)0x0) {
            local_3c = 0;
            goto LAB_016eb57a;
          }
          if (local_48[0] == '\0') {
            FUN_00d50b00();
          }
          while ((pVar16 = (pthread_key_t)pcVar14, *(int *)(pcVar17 + 0xc) != 0 &&
                 (pcVar1 = (code *)**(longlong **)(pcVar17 + 0x10), pcVar1 != pcVar5))) {
            if (pcVar1 != (code *)0x0) {
              FUN_00d50b00();
            }
            local_48[0] = '\0';
            FUN_00d21140();
            if ((local_48[0] != '\0') && (pcVar1 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if (pcVar1 != (code *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d23620();
            local_50 = pcVar1;
          }
          bVar2 = false;
          local_3c = 0;
          iVar8 = *(int *)((longlong)puVar11 + 0xc);
        }
        else {
          if (local_50 != (code *)0x0) goto LAB_016eb43e;
LAB_016eb550:
          local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
LAB_016eb57a:
          while (pVar16 = (pthread_key_t)pcVar14, *(int *)(pcVar17 + 0xc) != 0) {
            local_50 = (code *)**(longlong **)(pcVar17 + 0x10);
            if (local_50 != (code *)0x0) {
              FUN_00d50b00();
            }
            local_48[0] = '\0';
            FUN_00d21140();
            if ((local_48[0] != '\0') && (local_50 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if (local_50 != (code *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d23620();
          }
          bVar2 = true;
          iVar8 = *(int *)((longlong)puVar11 + 0xc);
        }
        if (iVar8 == 0) {
          if (!bVar2) {
            FUN_00d50b20();
          }
          if ((byte)local_3c == '\0') {
            FUN_00d50b20();
          }
          if (pcVar5 != (code *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          break;
        }
        bVar7 = pVar13 == 0 | (byte)local_3c;
        pcVar14 = (code *)CONCAT71((int7)((ulonglong)pcVar14 >> 8),bVar7);
        if ((bVar7 == 0) && (0 < (int)pVar13)) {
          iVar8 = 1;
          pVar16 = pVar13;
          do {
            if (iVar8 != 0) {
              FUN_00d23740();
            }
            iVar8 = *(int *)((longlong)puVar11 + 0xc);
            pVar16 = pVar16 - 1;
          } while (pVar16 != 0);
        }
        if (2 < iVar8) {
          pvVar9 = _pthread_getspecific((pthread_key_t)pcVar14);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01905f40();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        if ((byte)local_3c == '\0') {
          FUN_00d50b20();
        }
        if (pcVar5 != (code *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018f9310();
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}


