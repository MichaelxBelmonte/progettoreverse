// Function: FUN_00dcb280
// Address: 00dcb280
// Size: 507 bytes
// Class: GNString
// String references:
//   "Attempted read from a non-connected socket"
//   "Read aborted"
//   "Unable to read from socket: %s"


longlong FUN_00dcb280(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  char cVar1;
  ssize_t sVar2;
  undefined4 extraout_var;
  int *piVar4;
  int unaff_ESI;
  longlong *unaff_RDI;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  int local_34;
  longlong lVar3;
  
  cVar1 = *(char *)((longlong)unaff_RDI + 0x31);
  local_34 = unaff_ESI;
  lVar3 = DAT_02783cb0;
  while (DAT_02783cb0 = lVar3, cVar1 == '\0') {
    if ((char)unaff_RDI[6] == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar3;
      FUN_00cc7b40();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x470))();
    }
    lVar3 = DAT_02783cb0;
    cVar1 = *(char *)((longlong)unaff_RDI + 0x31);
  }
  do {
    sVar2 = _read((int)param_1,(void *)(longlong)local_34,param_3);
    lVar3 = CONCAT44(extraout_var,sVar2);
    if (lVar3 != -1) {
      if (lVar3 != 0) {
        return lVar3;
      }
      goto LAB_00dcb3ed;
    }
    piVar4 = ___error();
    lVar3 = DAT_02783cb8;
  } while (*piVar4 == 4);
  if (*(char *)((longlong)unaff_RDI + 0x32) != '\0') {
    if (DAT_02783cb8 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = '\x01';
    FUN_00cc7b40();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  piVar4 = ___error();
  lVar3 = DAT_02783cc0;
  if (*piVar4 == 0x23) {
    if (DAT_02783cc0 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar3;
    local_50 = '\x01';
    FUN_00cc7b40();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_02783cc8;
  if (DAT_02783cc8 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar3;
  local_40 = '\x01';
  ___error();
  local_80 = FUN_00e7dfe0();
  local_88 = 1;
  local_90 = &DAT_026ba3d0;
  FUN_00cc7b40(&DAT_026ba3d0,&local_90);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_00dcb3ed:
  *(undefined1 *)((longlong)unaff_RDI + 0x31) = 0;
  if (*(int *)((longlong)unaff_RDI + 0x14) != -1) {
    *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0xffffffff;
  }
  return 0;
}


