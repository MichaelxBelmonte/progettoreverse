// Function: FUN_0173f680
// Address: 0173f680
// Size: 862 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0173f7ad) */
/* WARNING: Removing unreachable block (ram,0x0173f7b6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0173f680(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  longlong unaff_RDI;
  bool bVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  longlong local_68;
  char local_60;
  float local_34;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01770870();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_017708d0();
    if (cVar2 == '\0') {
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770f00();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_01770c70();
      if ((int)uVar3 < 1) {
        uVar3 = 0;
      }
      else {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar10 = (float)FUN_017708f0();
        uVar9 = 0;
        iVar4 = FUN_00e7d780();
        local_34 = 0.0;
        do {
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01779ec0();
          iVar5 = FUN_00e7d780();
          iVar6 = 0;
          if (iVar4 / 2 < iVar5 % iVar4) {
            iVar6 = iVar4;
          }
          local_34 = local_34 + (float)(iVar5 % iVar4 - iVar6);
          uVar9 = uVar9 + 1;
        } while (uVar3 != uVar9);
        bVar8 = true;
        uVar9 = 0;
        do {
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar11 = (float)FUN_01779ec0();
          if (DAT_0241fd58 <
              (float)((uint)((float)(int)uVar9 * (fVar10 / (float)(int)uVar3) -
                            (fVar11 - local_34 / (float)(int)uVar3)) & _DAT_02390140)) break;
          uVar9 = uVar9 + 1;
          bVar8 = (longlong)uVar9 < (longlong)(int)uVar3;
        } while (uVar3 != uVar9);
        uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),bVar8) ^ 1;
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      uVar3 = FUN_01750eb0();
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar3 & 0xffffff01;
}


