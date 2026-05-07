// Function: FUN_019e4f60
// Address: 019e4f60
// Size: 1754 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019e510a) */
/* WARNING: Removing unreachable block (ram,0x019e5136) */
/* WARNING: Removing unreachable block (ram,0x019e513b) */
/* WARNING: Removing unreachable block (ram,0x019e5146) */
/* WARNING: Removing unreachable block (ram,0x019e514e) */
/* WARNING: Removing unreachable block (ram,0x019e5110) */
/* WARNING: Removing unreachable block (ram,0x019e5118) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019e4f60(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  char *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*unaff_RSI + 0xe20))();
  FUN_00d23340();
  pcVar8 = local_40;
  local_38[0] = local_40[0];
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = pcVar8;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == (char *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  if (local_40[0] == '\0') {
    if (local_48 != (char *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019e5073;
    }
LAB_019e50c4:
    pvVar5 = _pthread_getspecific((pthread_key_t)pcVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01296db0();
    if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (char *)0x0) {
LAB_019e51bd:
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      (**(code **)(*unaff_RSI + 0xa00))();
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_012ebfe0();
      if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      local_78 = dVar11 + DAT_0241b6b0 + _DAT_0241b688;
      bVar1 = false;
      pcVar4 = (char *)0x0;
LAB_019e5306:
      do {
        (**(code **)(*unaff_RSI + 0x9c0))(local_78,_DAT_023b1e98);
        if (local_48 == pcVar4) {
          pcVar9 = pcVar4;
          bVar2 = bVar1;
          if ((bVar1) || (local_48 == (char *)0x0)) goto joined_r0x019e53a9;
          bVar2 = true;
          if (local_40[0] == '\0') {
            FUN_00d50b00();
            goto LAB_019e5395;
          }
        }
        else {
          pcVar9 = local_48;
          if (local_40[0] == '\0') {
            if (local_48 != (char *)0x0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (pcVar4 != (char *)0x0)) {
              FUN_00d50b20();
              pcVar4 = local_48;
LAB_019e5395:
              pcVar9 = pcVar4;
              bVar2 = true;
            }
joined_r0x019e53a9:
            if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar2 = true;
            if ((bVar1) && (pcVar4 != (char *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        bVar1 = bVar2;
        pVar7 = (pthread_key_t)pcVar8;
        local_78 = local_78 + _DAT_0241b688;
        pcVar4 = pcVar9;
        if (pcVar9 == (char *)0x0) {
          if (local_78 + _DAT_023b1e98 <= dVar12) goto LAB_019e5461;
          goto LAB_019e5306;
        }
        if ((*(int *)(pcVar9 + 0xc) != 0) || (local_78 + _DAT_023b1e98 <= dVar12))
        goto LAB_019e5417;
      } while( true );
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)pcVar8);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pcVar8 = local_48;
    }
    cVar3 = FUN_0126cd60();
    if (cVar3 != '\0') goto LAB_019e51bd;
    *unaff_RDI = local_48;
  }
  else {
    if (local_48 == (char *)0x0) goto LAB_019e50c4;
LAB_019e5073:
    pvVar5 = _pthread_getspecific((pthread_key_t)pcVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_0126cd60();
    if (cVar3 != '\0') goto LAB_019e50c4;
    *unaff_RDI = local_48;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_019e562b:
  FUN_00d50b20();
  return unaff_RDI;
LAB_019e5417:
  if (*(int *)(pcVar9 + 0xc) == 0) {
LAB_019e5461:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d242c0(local_78 + _DAT_023b1e98,0);
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_01259650();
    if (0 < *(int *)(pcVar9 + 0xc)) {
      iVar10 = 0;
      do {
        pvVar5 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(pcVar9 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_01259650();
        if (dVar11 + DAT_0241b6b0 < dVar12) {
          FUN_00d242c0(dVar12,unaff_RSI);
          FUN_00d23310();
          pcVar8 = local_40;
          if (local_40[0] == '\0') {
            pcVar8 = &local_70;
          }
          local_70 = local_40[0];
          *pcVar8 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
            FUN_00d50b20();
          }
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if ((local_70 == '\0') && (local_48 != (char *)0x0)) {
            FUN_00d50b00();
          }
          *unaff_RDI = local_48;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          goto joined_r0x019e560e;
        }
        iVar10 = iVar10 + 1;
        dVar11 = dVar12;
      } while (iVar10 < *(int *)(pcVar9 + 0xc));
    }
    FUN_00d23340();
    pcVar8 = local_40;
    if (local_40[0] == '\0') {
      pcVar8 = &local_70;
    }
    local_70 = local_40[0];
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((local_70 == '\0') && (local_48 != (char *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
joined_r0x019e560e:
  if ((bVar1) && (pcVar9 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (char *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_019e562b;
}


