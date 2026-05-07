// Function: FUN_001570d0
// Address: 001570d0
// Size: 1117 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x00157329) */
/* WARNING: Removing unreachable block (ram,0x0015732e) */
/* WARNING: Removing unreachable block (ram,0x00157337) */
/* WARNING: Removing unreachable block (ram,0x0015734e) */
/* WARNING: Removing unreachable block (ram,0x00157352) */
/* WARNING: Removing unreachable block (ram,0x001574b3) */
/* WARNING: Removing unreachable block (ram,0x001574bc) */
/* WARNING: Removing unreachable block (ram,0x00157203) */
/* WARNING: Removing unreachable block (ram,0x0015720c) */
/* WARNING: Removing unreachable block (ram,0x00157153) */
/* WARNING: Removing unreachable block (ram,0x00157170) */
/* WARNING: Removing unreachable block (ram,0x00157155) */
/* WARNING: Removing unreachable block (ram,0x00157172) */
/* WARNING: Removing unreachable block (ram,0x00157279) */

int FUN_001570d0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong lVar9;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_90;
  char local_88;
  int local_68;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  lVar9 = *unaff_RDI;
  if (*(int *)(lVar9 + 0xc) != 0) {
    if (unaff_ESI == -1) {
      return *(int *)(lVar9 + 0xc) + -1;
    }
    local_68 = -1;
    local_38 = 0;
    iVar3 = -1;
    bVar1 = false;
    while( true ) {
      lVar4 = (longlong)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar9 + 0xc) <= local_68) break;
      lVar8 = *(longlong *)(lVar9 + 0x10);
      lVar4 = *(longlong *)(lVar8 + 8 + lVar4 * 8);
      FUN_00517fa0();
      pVar7 = (pthread_key_t)lVar8;
      FUN_00b68420();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        FUN_0051b590();
        pvVar6 = _pthread_getspecific(pVar7);
        lVar8 = 0;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar8 = *(longlong *)((ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
        }
        iVar2 = *(int *)(lVar8 + 0xb0);
      }
      else {
        iVar2 = FUN_00d45870();
        FUN_00d50b20();
      }
      if ((iVar3 < iVar2) && (iVar2 < unaff_ESI)) {
        FUN_0051b4f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          iVar3 = iVar2;
          if (lVar4 == local_38) {
            if ((!bVar1) && (lVar4 != 0)) {
              bVar1 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_38 != 0)) {
              FUN_00d50b20();
              local_38 = lVar4;
              bVar1 = true;
            }
            else {
              local_38 = lVar4;
              bVar1 = true;
            }
          }
        }
      }
    }
    FUN_0015ee90();
    pVar7 = (pthread_key_t)lVar9;
    if (local_38 != 0) {
      FUN_0051b4f0();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6a50();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_0051b4f0();
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      iVar3 = FUN_00d237a0();
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar1) {
        return iVar3 + 1;
      }
      FUN_00d50b20();
      return iVar3 + 1;
    }
  }
  return 0;
}


