// Function: FUN_01528450
// Address: 01528450
// Size: 678 bytes
// Class: GNFraction


void FUN_01528450(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char *pcVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong lVar8;
  longlong unaff_RDI;
  bool bVar9;
  uint uVar10;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) == 0) {
    uVar10 = 0;
    bVar9 = false;
    lVar8 = 0;
  }
  else {
    uVar10 = 0;
    lVar8 = 0;
    bVar9 = false;
    do {
      FUN_00d23310();
      local_38[0] = local_40[0];
      pcVar7 = local_38;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar7;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar6 = (pthread_key_t)pcVar7;
      if (local_48 == lVar8) {
        if ((bVar9) || (local_48 == 0)) {
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar9 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_38[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar9) || (lVar8 == 0)) goto LAB_01528530;
        FUN_00d50b20();
        lVar8 = local_48;
        bVar9 = true;
      }
      else if ((bVar9) && (lVar8 != 0)) {
        FUN_00d50b20();
        lVar8 = local_48;
        bVar9 = true;
      }
      else {
LAB_01528530:
        lVar8 = local_48;
        bVar9 = true;
      }
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152aa70();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 != 0) {
        uVar10 = *(uint *)(*(longlong *)(unaff_RDI + 0x48) + 0xc);
        break;
      }
      FUN_015276e0();
      *(int *)(unaff_RDI + 0x40) = *(int *)(unaff_RDI + 0x40) + -1;
    } while (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) != 0);
  }
  do {
    if ((int)uVar10 < 1) {
LAB_01528704:
      if ((bVar9) && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      return;
    }
    uVar10 = uVar10 - 1;
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (ulonglong)uVar10 * 8);
    pVar6 = uVar10;
    if (lVar8 == lVar2) {
      lVar2 = lVar8;
      bVar3 = bVar9;
      if ((!bVar9) && (lVar8 != 0)) {
        FUN_00d50b00();
        bVar3 = true;
      }
    }
    else {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar9) && (lVar8 != 0)) {
        FUN_00d50b20();
      }
    }
    bVar9 = bVar3;
    lVar8 = lVar2;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152aa70();
    iVar1 = *(int *)(local_48 + 0xc);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 != 0) goto LAB_01528704;
    FUN_015276e0();
  } while( true );
}


