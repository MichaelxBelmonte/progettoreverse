// Function: FUN_0194d580
// Address: 0194d580
// Size: 1423 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0194da12) */
/* WARNING: Removing unreachable block (ram,0x0194da1b) */
/* WARNING: Removing unreachable block (ram,0x0194d95e) */
/* WARNING: Removing unreachable block (ram,0x0194d967) */
/* WARNING: Removing unreachable block (ram,0x0194d841) */
/* WARNING: Removing unreachable block (ram,0x0194d84d) */
/* WARNING: Removing unreachable block (ram,0x0194d74e) */
/* WARNING: Removing unreachable block (ram,0x0194d75a) */
/* WARNING: Removing unreachable block (ram,0x0194d657) */
/* WARNING: Removing unreachable block (ram,0x0194d660) */
/* WARNING: Removing unreachable block (ram,0x0194d67b) */
/* WARNING: Removing unreachable block (ram,0x0194d687) */
/* WARNING: Removing unreachable block (ram,0x0194d765) */
/* WARNING: Removing unreachable block (ram,0x0194d76e) */
/* WARNING: Removing unreachable block (ram,0x0194d858) */
/* WARNING: Removing unreachable block (ram,0x0194d861) */
/* WARNING: Removing unreachable block (ram,0x0194d9b7) */
/* WARNING: Removing unreachable block (ram,0x0194d9c0) */
/* WARNING: Removing unreachable block (ram,0x0194da43) */
/* WARNING: Removing unreachable block (ram,0x0194da4c) */

longlong * FUN_0194d580(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong *plVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_100;
  undefined1 local_f8;
  longlong *local_f0;
  undefined1 local_e8;
  undefined1 local_d8;
  longlong local_c8;
  char local_c0;
  longlong local_40;
  char local_38;
  
  FUN_0194d210();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4ba0();
  lVar1 = DAT_027e0940;
  if (DAT_027e0940 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6520();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar4 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f020();
  FUN_0194d210();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar4 + 0x18))();
  local_100 = lVar1;
  local_f8 = 0;
  local_e8 = 0;
  pplVar6 = &local_f0;
  local_f0 = plVar4;
  FUN_0194de10(pplVar6,&local_100);
  pVar5 = (pthread_key_t)pplVar6;
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(&UNK_000016a8 + *unaff_RSI))();
  FUN_0132b1c0();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ddd0();
  FUN_00e7bdb0();
  FUN_01287c80();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01390340();
  if (cVar2 == '\0') {
    local_d8 = 0;
    FUN_01947890();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


