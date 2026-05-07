// Function: FUN_012edae0
// Address: 012edae0
// Size: 1988 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012ede36) */
/* WARNING: Removing unreachable block (ram,0x012ede3b) */
/* WARNING: Removing unreachable block (ram,0x012ede9a) */
/* WARNING: Removing unreachable block (ram,0x012edea3) */
/* WARNING: Removing unreachable block (ram,0x012edc48) */
/* WARNING: Removing unreachable block (ram,0x012edc51) */
/* WARNING: Removing unreachable block (ram,0x012edd76) */
/* WARNING: Removing unreachable block (ram,0x012edd7f) */
/* WARNING: Removing unreachable block (ram,0x012edcc6) */
/* WARNING: Removing unreachable block (ram,0x012edccb) */
/* WARNING: Removing unreachable block (ram,0x012ee256) */
/* WARNING: Removing unreachable block (ram,0x012ee262) */
/* WARNING: Removing unreachable block (ram,0x012edfd1) */
/* WARNING: Removing unreachable block (ram,0x012edfdd) */
/* WARNING: Removing unreachable block (ram,0x012edfe8) */
/* WARNING: Removing unreachable block (ram,0x012edff1) */

void FUN_012edae0(void)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint uVar12;
  ulonglong uVar13;
  longlong local_c0;
  char local_b8;
  longlong *local_78;
  longlong *local_48;
  char local_40;
  undefined8 *local_38;
  
  if (*unaff_RSI == 0) {
    return;
  }
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  iVar8 = *(int *)(unaff_RDI + 0x108) + 1;
  *(int *)(unaff_RDI + 0x108) = iVar8;
  lVar7 = *unaff_RSI;
  uVar12 = *(uint *)(lVar7 + 0xc);
  uVar13 = (ulonglong)uVar12;
  if (0 < (int)uVar12) {
    plVar10 = (longlong *)0x0;
    bVar2 = false;
    local_38 = (undefined8 *)0x0;
    bVar1 = false;
    do {
      uVar12 = uVar12 - 1;
      plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + (ulonglong)uVar12 * 8);
      pVar9 = uVar12;
      if (plVar10 == plVar11) {
        if ((!bVar2) && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b00();
          plVar11 = plVar10;
          goto LAB_012edc10;
        }
        lVar7 = *(longlong *)(unaff_RDI + 0xb0);
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_012edc10:
        bVar2 = true;
        lVar7 = *(longlong *)(unaff_RDI + 0xb0);
        plVar10 = plVar11;
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      cVar4 = FUN_00d23d70();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        local_78 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = local_48;
          FUN_00d235a0();
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01275420();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_78 != (longlong *)0x0) {
          if (local_38 == (undefined8 *)0x0) {
            local_38 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_38 = &DAT_02572358;
            (*pcVar3)();
            bVar1 = true;
          }
          FUN_00d21140();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508450();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0150ec20();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d23740();
        }
        FUN_012e6e20();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0128dda0();
      }
      if ((longlong)uVar13 < 2) goto LAB_012ee0b3;
      uVar13 = uVar13 - 1;
      lVar7 = *unaff_RSI;
    } while( true );
  }
  bVar1 = false;
  local_38 = (undefined8 *)0x0;
  bVar2 = false;
  plVar10 = (longlong *)0x0;
LAB_012ee0da:
  uVar13 = (ulonglong)(iVar8 - 1U);
  *(uint *)(unaff_RDI + 0x108) = iVar8 - 1U;
  FUN_012e57f0();
  if ((*(longlong *)(unaff_RDI + 0x58) == 0) && (puVar5 != (undefined8 *)0x0)) {
    if (0 < *(int *)((longlong)puVar5 + 0xc)) {
      iVar8 = 0;
      do {
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 != (longlong *)0x0) {
          pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
          plVar11 = local_48;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar11 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar11 + 0x3e0))();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((longlong)puVar5 + 0xc));
    }
    FUN_00115190();
  }
  if ((bVar1) && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_012ee0b3:
  iVar8 = *(int *)(unaff_RDI + 0x108);
  goto LAB_012ee0da;
}


