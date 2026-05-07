// Function: FUN_004ef800
// Address: 004ef800
// Size: 1839 bytes
// Class: MUAudioFileSource

double FUN_004ef800(int64_t *param_1,int64_t *param_2,char param_3)

{
  void *pvVar1;
  void* pVar2;
  int64_t this_ptr;
  double dVar3;
  double dVar4;
  double local_70;
  int64_t local_68;
  char local_60;
  double local_48;
  int64_t local_40;
  char local_38;
  
  pVar2 = 0x4f0190;
  switch(*(void*)(this_ptr + 0xc)) {
  case 0:
    pvVar1 = _pthread_getspecific(0x4f0190);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = (double)FUN_004f01b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (param_3 == '\0') {
      return local_48;
    }
    if (*param_1 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = (double)FUN_016c9870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c9950();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    dVar3 = *(double *)(this_ptr + 0x10);
    dVar4 = *(double *)(this_ptr + 0x18) - dVar3;
    goto LAB_004ef8fa;
  case 2:
    FUN_000ba510();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    dVar3 = (double)FUN_004f01b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_38 == '\0') {
      return dVar3;
    }
    if (local_40 == 0) {
      return dVar3;
    }
    FUN_00d50b20();
    return dVar3;
  case 3:
    pvVar1 = _pthread_getspecific(0x4f0190);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_004f01b0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (*param_2 != 0) {
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ebfe0();
    }
    local_48 = (double)FUN_00e7b500();
    if (param_3 == '\0') {
      return local_48;
    }
    if (*param_1 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      return local_48;
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = (double)FUN_016c9870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c9950();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    dVar3 = (double)FUN_004f01b0();
    return dVar3;
  default:
    dVar3 = 0.0;
    dVar4 = g_023b19a0;
LAB_004ef8fa:
    dVar3 = (double)FUN_00e7b500(dVar3,dVar4);
    return dVar3;
  }
  if (local_70 < local_48) {
    local_48 = local_70;
  }
  return local_48;
}

