// Function: FUN_007e59d0
// Address: 007e59d0
// Size: 2258 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x007e5c27) */
/* WARNING: Removing unreachable block (ram,0x007e5c30) */
/* WARNING: Removing unreachable block (ram,0x007e628b) */
/* WARNING: Removing unreachable block (ram,0x007e629b) */
/* WARNING: Removing unreachable block (ram,0x007e62ef) */
/* WARNING: Removing unreachable block (ram,0x007e62fc) */
/* WARNING: Removing unreachable block (ram,0x007e5be0) */
/* WARNING: Removing unreachable block (ram,0x007e5bed) */
/* WARNING: Removing unreachable block (ram,0x007e5ea1) */
/* WARNING: Removing unreachable block (ram,0x007e5d57) */
/* WARNING: Removing unreachable block (ram,0x007e5d63) */
/* WARNING: Removing unreachable block (ram,0x007e5f2d) */
/* WARNING: Removing unreachable block (ram,0x007e5f50) */
/* WARNING: Removing unreachable block (ram,0x007e5f2f) */
/* WARNING: Removing unreachable block (ram,0x007e5f52) */
/* WARNING: Removing unreachable block (ram,0x007e5ff7) */
/* WARNING: Removing unreachable block (ram,0x007e6003) */
/* WARNING: Removing unreachable block (ram,0x007e6047) */
/* WARNING: Removing unreachable block (ram,0x007e6070) */
/* WARNING: Removing unreachable block (ram,0x007e6049) */
/* WARNING: Removing unreachable block (ram,0x007e6072) */
/* WARNING: Removing unreachable block (ram,0x007e61d7) */
/* WARNING: Removing unreachable block (ram,0x007e6200) */
/* WARNING: Removing unreachable block (ram,0x007e61d9) */
/* WARNING: Removing unreachable block (ram,0x007e6202) */

void FUN_007e59d0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong unaff_RDI;
  pthread_key_t pVar11;
  ulonglong uVar12;
  bool bVar13;
  uint uVar14;
  longlong local_90;
  char local_88;
  int local_78;
  longlong local_60;
  char local_58;
  int local_48;
  uint uStack_44;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      pVar11 = 0;
      do {
        lVar2 = local_60;
        pVar8 = pVar11;
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        FUN_00d243f0();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        local_60 = 0;
        local_48 = -1;
        uStack_44 = 0;
LAB_007e5c8f:
        while( true ) {
          if (uStack_44 != 0) {
            if ((int)uStack_44 < 1) {
              uStack_44 = -uStack_44;
            }
            else {
              local_48 = local_48 - uStack_44;
              FUN_00d23690();
              uStack_44 = 0;
            }
          }
          lVar6 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((longlong)puVar4 + 0xc) <= local_48) break;
          lVar7 = puVar4[2];
          local_60 = *(longlong *)(lVar7 + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
          pVar8 = (pthread_key_t)lVar7;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124df10();
          if (local_88 == '\0') goto LAB_007e5d40;
          if (local_90 != 0) goto LAB_007e5d70;
        }
        puVar9 = puVar4;
        FUN_00115e00();
        pVar8 = (pthread_key_t)puVar9;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e61a0();
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (local_60 != 0) {
          local_48 = -1;
LAB_007e5f29:
          while ((lVar6 = local_90, local_48 = local_48 + 1, local_48 < *(int *)(local_60 + 0xc) &&
                 (*(int *)((longlong)puVar4 + 0xc) != 0))) {
            pvVar5 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_60 + 0x10));
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            if (local_88 == '\0') goto LAB_007e5fe0;
            if (local_90 != 0) goto LAB_007e600b;
          }
          FUN_000be170();
          FUN_00d50b20();
        }
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        while( true ) {
          lVar6 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((longlong)puVar4 + 0xc) <= local_48) break;
          local_60 = *(longlong *)(puVar4[2] + 8 + lVar6 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar4[2]);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb5e0();
        }
        FUN_00115e00();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        pVar11 = pVar11 + 1;
      } while ((int)pVar11 < *(int *)(lVar1 + 0xc));
    }
    FUN_007ead60();
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
LAB_007e5fe0:
  if (local_90 != 0) {
    FUN_00d50b00();
LAB_007e600b:
    local_88 = '\0';
    local_90 = 0;
    local_78 = -1;
    do {
      do {
        lVar7 = (longlong)local_78;
        local_78 = local_78 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_78) goto LAB_007e5f00;
        lVar10 = *(longlong *)(lVar6 + 0x10);
        local_90 = *(longlong *)(lVar10 + 8 + lVar7 * 8);
        uVar14 = *(uint *)((longlong)puVar4 + 0xc);
        uVar12 = (ulonglong)uVar14;
      } while ((int)uVar14 < 1);
      bVar13 = false;
      while( true ) {
        uVar14 = uVar14 - 1;
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar10 = puVar4[2];
        lVar7 = *(longlong *)(lVar10 + (ulonglong)uVar14 * 8);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_0126eff0();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          bVar13 = true;
          FUN_00d23620();
        }
        if ((longlong)uVar12 < 2) break;
        uVar12 = uVar12 - 1;
      }
    } while ((!bVar13) || (*(int *)((longlong)puVar4 + 0xc) != 0));
LAB_007e5f00:
    FUN_001159b0();
    FUN_00d50b20();
  }
  goto LAB_007e5f29;
LAB_007e5d40:
  if (local_90 != 0) {
    FUN_00d50b00();
LAB_007e5d70:
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013d9040();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      uStack_44 = ~uStack_44;
    }
    FUN_00d50b20();
  }
  goto LAB_007e5c8f;
}


