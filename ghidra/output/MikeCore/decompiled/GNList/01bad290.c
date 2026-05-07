// Function: FUN_01bad290
// Address: 01bad290
// Size: 1073 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01bad57f) */
/* WARNING: Removing unreachable block (ram,0x01bad58b) */
/* WARNING: Removing unreachable block (ram,0x01bad2fa) */
/* WARNING: Removing unreachable block (ram,0x01bad303) */
/* WARNING: Removing unreachable block (ram,0x01bad5d2) */
/* WARNING: Removing unreachable block (ram,0x01bad5db) */
/* WARNING: Removing unreachable block (ram,0x01bad391) */
/* WARNING: Removing unreachable block (ram,0x01bad3b0) */
/* WARNING: Removing unreachable block (ram,0x01bad393) */
/* WARNING: Removing unreachable block (ram,0x01bad3b2) */
/* WARNING: Removing unreachable block (ram,0x01bad68a) */

longlong * FUN_01bad290(void *param_1,longlong *param_2,size_t param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong local_80;
  char local_78;
  int local_68;
  longlong local_48;
  char local_40;
  
  lVar1 = *param_2;
  lVar4 = param_2[1];
  if (((char)lVar4 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_80 + 0x18)) {
    _memset_pattern16(param_1,(void *)((ulonglong)((*(uint *)(local_80 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  local_68 = -1;
  bVar2 = false;
  lVar9 = 0;
  do {
    while( true ) {
      local_68 = local_68 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_68) {
        FUN_001159b0();
        *unaff_RDI = local_80;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((char)lVar4 != '\0') {
          FUN_00d50b20();
        }
        if ((bVar2) && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        return unaff_RDI;
      }
      pVar8 = (pthread_key_t)*(undefined8 *)(lVar1 + 0x10);
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_48 == lVar9) break;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        lVar5 = local_48;
        if ((bVar2) && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01bad4b7;
      }
      lVar5 = local_48;
      if ((bVar2) && (lVar9 != 0)) {
        FUN_00d50b20();
      }
joined_r0x01bad46a:
      lVar9 = lVar5;
      bVar2 = true;
      if (lVar9 != 0) goto LAB_01bad4d7;
LAB_01bad380:
      lVar9 = 0;
    }
    lVar5 = lVar9;
    bVar3 = bVar2;
    if ((!bVar2) && (local_48 != 0)) {
      if (local_40 != '\0') goto joined_r0x01bad46a;
      FUN_00d50b00();
      bVar3 = true;
    }
LAB_01bad4b7:
    lVar9 = lVar5;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = bVar3;
    if (lVar9 == 0) goto LAB_01bad380;
LAB_01bad4d7:
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_019a54a0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if (local_48 == 0) {
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_01507f00();
        *(undefined4 *)(*(longlong *)(local_80 + 0x10) + (longlong)local_68 * 4) = uVar6;
      }
      else {
        uVar6 = FUN_00d45870();
        *(undefined4 *)(*(longlong *)(local_80 + 0x10) + (longlong)local_68 * 4) = uVar6;
        FUN_00d50b20();
      }
    }
  } while( true );
}


