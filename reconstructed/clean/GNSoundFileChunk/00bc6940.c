// Function: FUN_00bc6940
// Address: 00bc6940
// Size: 597 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


void FUN_00bc6940(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t this_ptr;
  void*puVar9;
  void*local_48;
  char local_40;
  
  lVar6 = FUN_00b7a710();
  uVar7 = lVar6 - 1;
  uVar4 = *(uint *)(this_ptr + 0x20);
  if ((uVar7 | (int64_t)(int)uVar4) >> 0x20 == 0) {
    uVar4 = (uint)((uVar7 & 0xffffffff) / (uint64_t)uVar4);
  }
  else {
    uVar4 = (uint)((int64_t)uVar7 / (int64_t)(int)uVar4);
  }
  iVar5 = uVar4 + 1;
  do {
    lVar6 = FUN_00e313b0();
    puVar9 = local_48;
    if (lVar6 == 0) {
      if (0x7ffffffe < uVar4) {
        return;
      }
      FUN_00bc70f0();
      iVar8 = 0;
      if (local_48 != (void*)0x0) {
        bVar2 = true;
        iVar8 = 0;
        if (local_40 == '\0') {
          FUN_00d50b00();
          iVar8 = 0;
        }
        goto LAB_00bc6abf;
      }
      puVar9 = (void*)0x0;
      bVar2 = false;
      if (0 < iVar5) goto LAB_00bc6ac5;
    }
    else {
      iVar8 = *(int *)(lVar6 + 0xc);
      if (iVar5 <= iVar8) {
        return;
      }
      FUN_00d50b00();
      FUN_00bc7000();
      if (local_48 == (void*)0x0) {
        puVar9 = (void*)0x0;
        bVar2 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_00d21370();
LAB_00bc6abf:
      if (iVar8 < iVar5) {
LAB_00bc6ac5:
        iVar8 = iVar5 - iVar8;
        do {
          local_48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &g_0254a888;
          *(void*)((int64_t)local_48 + 0xc) = 0;
          local_48[2] = 0;
          local_48[3] = 0;
          FUN_00d500e0();
          local_40 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    cVar3 = FUN_00e31450(3,puVar9);
    bVar1 = true;
    if (cVar3 != '\0') {
      FUN_00d50b00();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      bVar1 = false;
    }
    if ((bVar2) && (puVar9 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      return;
    }
  } while( true );
}

