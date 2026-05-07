// Function: FUN_019e45d0
// Address: 019e45d0
// Size: 1893 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019e477a) */
/* WARNING: Removing unreachable block (ram,0x019e47a6) */
/* WARNING: Removing unreachable block (ram,0x019e47ab) */
/* WARNING: Removing unreachable block (ram,0x019e47b6) */
/* WARNING: Removing unreachable block (ram,0x019e47be) */
/* WARNING: Removing unreachable block (ram,0x019e4780) */
/* WARNING: Removing unreachable block (ram,0x019e4788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019e45d0(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  char *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*unaff_RSI + 0xe20))();
  FUN_00d23340();
  pcVar7 = local_40;
  local_38[0] = local_40[0];
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = pcVar7;
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
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012641c0();
  if (local_40[0] != '\0') {
    if (local_48 == (char *)0x0) goto LAB_019e4734;
LAB_019e46e3:
    pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_0126cd60();
    if (cVar3 != '\0') goto LAB_019e4734;
    *unaff_RDI = local_48;
LAB_019e4938:
    *(undefined1 *)(unaff_RDI + 1) = 1;
    goto LAB_019e4d2e;
  }
  if (local_48 != (char *)0x0) {
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_019e46e3;
  }
LAB_019e4734:
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012976e0();
  if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (char *)0x0) {
    pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pcVar7 = local_48;
    }
    cVar3 = FUN_0126cd60();
    if (cVar3 == '\0') {
      *unaff_RDI = local_48;
      goto LAB_019e4938;
    }
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar9 = (double)FUN_0125a280();
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar10 = (double)FUN_0125a280();
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_01259650();
  if (dVar11 <= dVar10) {
    dVar9 = dVar9 + DAT_0241b6a8;
  }
  else {
    pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar9 = (double)FUN_01259650();
    dVar9 = dVar9 + DAT_023d5f50;
  }
  (**(code **)(*unaff_RSI + 0xa00))();
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar10 = (double)FUN_012ebd30();
  if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  bVar1 = false;
  pcVar4 = (char *)0x0;
LAB_019e4a52:
  do {
    (**(code **)(*unaff_RSI + 0x9c0))(dVar9,_DAT_023b1e98);
    if (local_48 == pcVar4) {
      pcVar8 = pcVar4;
      bVar2 = bVar1;
      if ((bVar1) || (local_48 == (char *)0x0)) goto joined_r0x019e4af9;
      bVar2 = true;
      if (local_40[0] == '\0') {
        FUN_00d50b00();
        goto LAB_019e4ae5;
      }
    }
    else {
      pcVar8 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != (char *)0x0) {
          FUN_00d50b00();
        }
        bVar2 = true;
        if ((bVar1) && (pcVar4 != (char *)0x0)) {
          FUN_00d50b20();
          pcVar4 = local_48;
LAB_019e4ae5:
          pcVar8 = pcVar4;
          bVar2 = true;
        }
joined_r0x019e4af9:
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
    dVar9 = dVar9 + _DAT_023b1e98;
    pcVar4 = pcVar8;
    if (pcVar8 != (char *)0x0) {
      if ((*(int *)(pcVar8 + 0xc) != 0) || (dVar10 <= dVar9)) {
        if (*(int *)(pcVar8 + 0xc) != 0) {
          FUN_00d242c0(dVar9,0);
          pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar9 = (double)FUN_01259650();
          if (*(int *)(pcVar8 + 0xc) < 1) goto LAB_019e4c44;
          lVar6 = 0;
          goto LAB_019e4be0;
        }
        break;
      }
      goto LAB_019e4a52;
    }
  } while (dVar9 < dVar10);
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  goto joined_r0x019e4d11;
  while (lVar6 = lVar6 + 1, dVar9 = dVar10, lVar6 < *(int *)(pcVar8 + 0xc)) {
LAB_019e4be0:
    pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_01259650();
    if (dVar10 < dVar9 + DAT_0241b6a8) {
      FUN_00d242c0(dVar10,unaff_RSI);
      FUN_00d23310();
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = &local_70;
      }
      local_70 = local_40[0];
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((local_70 == '\0') && (local_48 != (char *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_019e4d03;
    }
  }
LAB_019e4c44:
  FUN_00d23310();
  pcVar7 = local_40;
  if (local_40[0] == '\0') {
    pcVar7 = &local_70;
  }
  local_70 = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((local_70 == '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b00();
  }
LAB_019e4d03:
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x019e4d11:
  if ((bVar1) && (pcVar8 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (char *)0x0) {
    FUN_00d50b20();
  }
LAB_019e4d2e:
  FUN_00d50b20();
  return unaff_RDI;
}


