// Function: FUN_00347e50
// Address: 00347e50
// Size: 949 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x00347edd) */
/* WARNING: Removing unreachable block (ram,0x00347ee6) */
/* WARNING: Removing unreachable block (ram,0x00347f1a) */
/* WARNING: Removing unreachable block (ram,0x00347f23) */

void FUN_00347e50(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  pthread_key_t pVar3;
  void *pvVar4;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  plVar5 = local_40;
  if (*param_2 == 0) {
    FUN_012ca6e0(param_1,0);
    pVar3 = (pthread_key_t)param_1;
    if (local_40 != (longlong *)0x0) {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00347f30;
    }
  }
  else {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar3 = FUN_012e57e0();
    FUN_012c9e50(pVar3,0);
    if (local_40 != (longlong *)0x0) {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00347f30;
    }
  }
  bVar1 = false;
  plVar5 = (longlong *)0x0;
LAB_00347f30:
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012cb3e0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    FUN_012e89e0();
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


