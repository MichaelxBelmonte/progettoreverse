// Function: FUN_0170d020
// Address: 0170d020
// Size: 611 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0170d1e2) */
/* WARNING: Removing unreachable block (ram,0x0170d1eb) */
/* WARNING: Removing unreachable block (ram,0x0170d10c) */
/* WARNING: Removing unreachable block (ram,0x0170d115) */
/* WARNING: Removing unreachable block (ram,0x0170d15f) */
/* WARNING: Removing unreachable block (ram,0x0170d168) */
/* WARNING: Removing unreachable block (ram,0x0170d235) */
/* WARNING: Removing unreachable block (ram,0x0170d23e) */
/* WARNING: Removing unreachable block (ram,0x0170d05f) */
/* WARNING: Removing unreachable block (ram,0x0170d068) */
/* WARNING: Removing unreachable block (ram,0x0170d093) */
/* WARNING: Removing unreachable block (ram,0x0170d09c) */

undefined8 * FUN_0170d020(undefined8 param_1)

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  pthread_key_t pVar4;
  undefined4 unaff_ESI;
  undefined8 *unaff_RDI;
  longlong local_40;
  char local_38;
  
  FUN_012ca6e0(param_1,unaff_ESI);
  pVar4 = (pthread_key_t)param_1;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_0150c9f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_000be3f0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505730();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505960();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar4 = 0x25d7080;
  *puVar3 = &DAT_025d7080;
  puVar3[7] = 0;
  puVar3[8] = 0;
  (*DAT_025d7098)();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013132f0();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313360();
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return unaff_RDI;
}


