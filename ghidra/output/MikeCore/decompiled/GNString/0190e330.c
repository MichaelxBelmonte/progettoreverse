// Function: FUN_0190e330
// Address: 0190e330
// Size: 1924 bytes
// Class: GNString
// String references:
//   ", %@"


/* WARNING: Removing unreachable block (ram,0x0190e79e) */
/* WARNING: Removing unreachable block (ram,0x0190e7a7) */
/* WARNING: Removing unreachable block (ram,0x0190e3e7) */
/* WARNING: Removing unreachable block (ram,0x0190e410) */
/* WARNING: Removing unreachable block (ram,0x0190e3e9) */
/* WARNING: Removing unreachable block (ram,0x0190e412) */

longlong * FUN_0190e330(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  undefined *puVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar7;
  bool bVar8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  int local_88;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_48;
  char local_40;
  
  if (*(longlong *)(unaff_RSI + 0x70) == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    lVar1 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar1 != 0) {
      local_88 = -1;
      while (local_88 = local_88 + 1, local_88 < *(int *)(lVar1 + 0xc)) {
        pVar5 = (pthread_key_t)*(undefined8 *)(lVar1 + 0x10);
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017d1790();
        if (local_68 == (undefined8 *)0x0) {
          bVar8 = false;
        }
        else {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017d1790();
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0190bc80();
          if (local_48 == (undefined8 *)0x0) {
            bVar8 = false;
          }
          else {
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017d1790();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0190bc80();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01913950();
            bVar8 = local_c0 != 0;
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar8) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017d1790();
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0190bc80();
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01913950();
          if (local_40 == '\0') {
            if (local_48 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_68 = local_48;
          local_60 = '\0';
          FUN_00d235a0();
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_018c8180();
    }
    lVar1 = DAT_027feca0;
    if (DAT_027feca0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &DAT_025795a8;
    *puVar4 = &DAT_025795a8;
    (*DAT_025795c0)();
    lVar1 = *(longlong *)(unaff_RSI + 0x70);
    *(undefined8 **)(unaff_RSI + 0x70) = puVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      if (0 < *(int *)((longlong)puVar2 + 0xc)) {
        iVar7 = 0;
        do {
          if (iVar7 == 0) {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0190a100();
            if (local_60 == '\0') {
              if (local_68 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            FUN_00d8dbf0();
            if (local_68 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0190a100();
            local_60 = '\x01';
            if (local_48 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d94d80();
            local_68 = &DAT_024c5048;
            if (local_48 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)((longlong)puVar2 + 0xc));
      }
      FUN_018c8220();
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *(longlong *)(unaff_RSI + 0x70);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


