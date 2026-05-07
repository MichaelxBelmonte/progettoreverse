// Function: FUN_0010f410
// Address: 0010f410
// Size: 758 bytes
// Class: GNSoundFile
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


void FUN_0010f410(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  char *pcVar4;
  void*this_ptr;
  int64_t *plVar5;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = g_026fcec0;
  if (g_026fcec0 != 0) {
    FUN_00d50b00();
  }
  FUN_01cac990();
  plVar2 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027e92b0;
  if ((plVar2 == (int64_t *)0x0) || (plVar5 = plVar2, *(int *)((int64_t)plVar2 + 0xc) == 0)) {
    if (g_027e92b0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cac990();
    plVar5 = local_48;
    if (plVar2 == local_48) {
LAB_0010f538:
      plVar5 = plVar2;
      if (local_40[0] != '\0') {
LAB_0010f53e:
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar2 = plVar5;
          goto LAB_0010f538;
        }
        if (local_40[0] == '\0') goto LAB_0010f54c;
        goto LAB_0010f53e;
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
    }
LAB_0010f54c:
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar5 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (0 < *(int *)((int64_t)plVar5 + 0xc)) {
    FUN_00d23310();
    plVar2 = local_48;
    local_38[0] = local_40[0];
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar2 + 0x370))();
    plVar2 = (int64_t *)CONCAT71(uStack_67,local_68);
    FUN_017a52b0();
    local_58 = local_48;
    local_50 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_50 = '\x01';
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d23310();
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = &local_68;
      }
      local_68 = local_40[0];
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      if ((local_68 == '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_0010f6da;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_0010f6da:
  FUN_00d50b20();
  return;
}

