// Function: FUN_01735d80
// Address: 01735d80
// Size: 1675 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01735e1b) */
/* WARNING: Removing unreachable block (ram,0x017363ef) */
/* WARNING: Removing unreachable block (ram,0x017363f8) */
/* WARNING: Removing unreachable block (ram,0x0173622b) */
/* WARNING: Removing unreachable block (ram,0x01736237) */
/* WARNING: Removing unreachable block (ram,0x017360e5) */
/* WARNING: Removing unreachable block (ram,0x017360ee) */
/* WARNING: Removing unreachable block (ram,0x0173619b) */
/* WARNING: Removing unreachable block (ram,0x017361a4) */
/* WARNING: Removing unreachable block (ram,0x01736293) */
/* WARNING: Removing unreachable block (ram,0x0173629f) */
/* WARNING: Removing unreachable block (ram,0x01736375) */
/* WARNING: Removing unreachable block (ram,0x01735dd8) */
/* WARNING: Removing unreachable block (ram,0x01735de1) */
/* WARNING: Removing unreachable block (ram,0x017361c6) */
/* WARNING: Removing unreachable block (ram,0x017361cf) */
/* WARNING: Removing unreachable block (ram,0x01735e20) */
/* WARNING: Removing unreachable block (ram,0x01735e40) */
/* WARNING: Removing unreachable block (ram,0x01735e22) */
/* WARNING: Removing unreachable block (ram,0x01735e42) */
/* WARNING: Removing unreachable block (ram,0x0173606c) */

longlong * FUN_01735d80(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_68;
  char local_60;
  int local_50;
  longlong local_40;
  char local_38;
  
  lVar8 = local_68;
  FUN_017bf740();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_0173615d;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_0173615d;
  local_68 = 0;
  local_50 = -1;
  do {
    lVar4 = (longlong)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(lVar8 + 0xc) <= local_50) {
      bVar2 = false;
      lVar4 = 0;
      goto LAB_017360a5;
    }
    lVar7 = *(longlong *)(lVar8 + 0x10);
    local_68 = *(longlong *)(lVar7 + 8 + lVar4 * 8);
    plVar1 = (longlong *)*unaff_RSI;
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017aabf0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  } while (cVar3 == '\0');
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
  lVar8 = lVar7;
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
    lVar8 = lVar7;
  }
  FUN_017aa5e0();
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if (local_40 == 0) {
    bVar2 = false;
    lVar4 = 0;
    if (local_38 != '\0') {
      lVar4 = 0;
      bVar2 = false;
    }
  }
  else {
    lVar4 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      local_38 = '\0';
      bVar2 = true;
    }
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
LAB_017360a5:
  lVar7 = local_68;
  pVar6 = (pthread_key_t)lVar8;
  FUN_017c0b20();
  FUN_00d50b20();
  if (lVar4 != 0) {
    FUN_0173b7c0();
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    if (*param_1 == 0) {
      FUN_0176f970();
      if (local_68 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
        lVar8 = local_68;
      }
    }
    else {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      lVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_68 = local_40;
      }
      else {
        local_68 = local_40;
        local_38 = '\0';
      }
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b720();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b680();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0174e010();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_68 == 0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = local_68;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (!bVar2) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
LAB_0173615d:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


