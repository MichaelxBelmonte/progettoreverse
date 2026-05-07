// Function: FUN_017ce460
// Address: 017ce460
// Size: 802 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017ce725) */
/* WARNING: Removing unreachable block (ram,0x017ce73e) */
/* WARNING: Removing unreachable block (ram,0x017ce747) */
/* WARNING: Removing unreachable block (ram,0x017ce74c) */
/* WARNING: Removing unreachable block (ram,0x017ce752) */

undefined4 FUN_017ce460(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38 [8];
  char local_30 [8];
  
  if ((DAT_028af458 == (longlong *)0x0) || (DAT_028af461 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af458 == (longlong *)0x0) {
      lVar4 = *(longlong *)(unaff_RDI + 0x58);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      lVar1 = DAT_027d3868;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
        lVar1 = DAT_027d3868;
      }
      DAT_027d3868 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_018bf620();
      plVar5 = DAT_028af458;
      if (DAT_028af458 != local_40) {
        param_1 = DAT_028af458;
        if (local_38[0] == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
            param_1 = DAT_028af458;
          }
        }
        else {
          local_38[0] = '\0';
          plVar5 = local_40;
        }
        DAT_028af458 = plVar5;
        if (param_1 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (longlong *)0x0) && (DAT_028af460 == '\0')) {
        DAT_028af460 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      DAT_028af461 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af461 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  plVar5 = DAT_028af458;
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
    plVar5 = DAT_028af458;
  }
  DAT_028af458 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_018bf930();
  pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
  pcVar7 = local_30;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_30[0] = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  plVar5 = DAT_028af458;
  pvVar3 = _pthread_getspecific(pVar6);
  plVar2 = DAT_028af458;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar5 = plVar2, lVar4 != 0)) {
    plVar5 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x388))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return 0xffffffff;
}


