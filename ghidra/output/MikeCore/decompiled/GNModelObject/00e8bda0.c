// Function: FUN_00e8bda0
// Address: 00e8bda0
// Size: 1094 bytes
// Class: GNModelObject
// String references:
//   "GNModelObject"


/* WARNING: Removing unreachable block (ram,0x00e8be9b) */
/* WARNING: Removing unreachable block (ram,0x00e8beac) */
/* WARNING: Removing unreachable block (ram,0x00e8be20) */
/* WARNING: Removing unreachable block (ram,0x00e8be29) */
/* WARNING: Removing unreachable block (ram,0x00e8bebb) */
/* WARNING: Removing unreachable block (ram,0x00e8bec0) */
/* WARNING: Removing unreachable block (ram,0x00e8c12f) */
/* WARNING: Removing unreachable block (ram,0x00e8c138) */
/* WARNING: Removing unreachable block (ram,0x00e8bf32) */
/* WARNING: Removing unreachable block (ram,0x00e8bf50) */
/* WARNING: Removing unreachable block (ram,0x00e8bf34) */
/* WARNING: Removing unreachable block (ram,0x00e8bf52) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e8bda0(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  longlong *local_70;
  int local_48;
  
  if (unaff_RDI[6] == 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = 0x2572358;
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d50b00();
    FUN_00d22760();
    unaff_RDI[6] = (longlong)puVar4;
    FUN_00d50b20();
  }
  FUN_00d21140();
  if ((((longlong *)unaff_RSI[3] == unaff_RDI) && ((longlong *)unaff_RSI[4] != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)unaff_RSI[4] + 0x370))(), cVar2 != '\0')) {
    (**(code **)(*unaff_RDI + 0x210))(extraout_XMM0_Da,unaff_RSI[4]);
    if (unaff_RSI != (longlong *)0x0) {
      cVar2 = FUN_00d77de0();
      if (cVar2 == '\0') {
        if ((DAT_028a8d98 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_028a8ce8 = FUN_00d4fe50();
          _DAT_028a8cd0 = "GNModelObject";
          _DAT_028a8cd8 = 0x38;
          param_1 = 0xe8b770;
          _DAT_028a8ce0 = FUN_00e8b770;
          _DAT_028a8cf0 = 0;
          uRam00000000028a8cf8 = 0;
          _DAT_028a8d00 = 0;
          uRam00000000028a8d08 = 0;
          _DAT_028a8d10 = 0;
          uRam00000000028a8d18 = 0;
          _DAT_028a8d20 = 0;
          uRam00000000028a8d28 = 0;
          _DAT_028a8d30 = 0;
          uRam00000000028a8d38 = 0;
          _DAT_028a8d40 = 0;
          uRam00000000028a8d48 = 0;
          _DAT_028a8d50 = 0;
          uRam00000000028a8d58 = 0;
          _DAT_028a8d60 = 0;
          uRam00000000028a8d68 = 0;
          _DAT_028a8d70 = 0;
          uRam00000000028a8d78 = 0;
          _DAT_028a8d80 = 0;
          uRam00000000028a8d88 = 0;
          _DAT_028a8d90 = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*unaff_RSI + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') {
          unaff_RSI = DAT_02802688;
        }
        if (unaff_RSI != (longlong *)0x0) {
          _pthread_getspecific(param_1);
          FUN_00e8bda0();
        }
      }
      else {
        local_48 = -1;
        while( true ) {
          lVar5 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)((longlong)unaff_RSI + 0xc) <= local_48) break;
          plVar1 = *(longlong **)(unaff_RSI[2] + 8 + lVar5 * 8);
          local_70 = plVar1;
          if ((DAT_028a8d98 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            _DAT_028a8ce8 = FUN_00d4fe50();
            _DAT_028a8cd0 = "GNModelObject";
            _DAT_028a8cd8 = 0x38;
            _DAT_028a8ce0 = FUN_00e8b770;
            _DAT_028a8cf0 = 0;
            uRam00000000028a8cf8 = 0;
            _DAT_028a8d00 = 0;
            uRam00000000028a8d08 = 0;
            _DAT_028a8d10 = 0;
            uRam00000000028a8d18 = 0;
            _DAT_028a8d20 = 0;
            uRam00000000028a8d28 = 0;
            _DAT_028a8d30 = 0;
            uRam00000000028a8d38 = 0;
            _DAT_028a8d40 = 0;
            uRam00000000028a8d48 = 0;
            _DAT_028a8d50 = 0;
            uRam00000000028a8d58 = 0;
            _DAT_028a8d60 = 0;
            uRam00000000028a8d68 = 0;
            _DAT_028a8d70 = 0;
            uRam00000000028a8d78 = 0;
            _DAT_028a8d80 = 0;
            uRam00000000028a8d88 = 0;
            _DAT_028a8d90 = 0;
            ___cxa_guard_release();
          }
          pplVar6 = &DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar6 = &local_70;
            if (cVar2 == '\0') {
              pplVar6 = &DAT_02802688;
            }
          }
          if (*pplVar6 != (longlong *)0x0) {
            _pthread_getspecific((pthread_key_t)pplVar6);
            FUN_00e8bda0();
          }
        }
        FUN_00e8cae0();
      }
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x298))();
  }
  return;
}


