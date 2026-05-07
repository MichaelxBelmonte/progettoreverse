// Function: FUN_00b706d0
// Address: 00b706d0
// Size: 833 bytes
// Class: Unknown

uint64_t FUN_00b706d0(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *arg1;
  uint64_t uVar4;
  uint32_t uVar5;
  uint uStack_c8;
  uint32_t uStack_c4;
  uint8_t local_b8 [24];
  uint uStack_a0;
  uint32_t uStack_9c;
  uint8_t local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint local_5c;
  uint32_t local_58;
  uint32_t uStack_54;
  uint local_50;
  uint local_4c;
  uint64_t local_48;
  uint8_t local_40 [16];
  
  local_80 = *arg1;
  if ((local_80 != 0) && (*param_2 != 0)) {
    local_78 = '\0';
    FUN_00cde020();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    iVar2 = FUN_00e7dde0();
    lVar3 = _CFURLCreateFromFileSystemRepresentation(0,(int64_t)iVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = _ExtAudioFileOpenURL();
    _CFRelease();
    if (iVar2 == 0) {
      cVar1 = FUN_00b70300();
      if (cVar1 != '\0') {
        uStack_a0 = uStack_c8;
        uStack_9c = uStack_c4;
        uVar5 = (**(code **)(*(int64_t *)*param_2 + 0x370))();
        lVar3 = CONCAT44(uStack_54,local_58);
        if ((char)local_50 == '\0') {
          if (lVar3 != 0) {
            uVar5 = FUN_00d50b00();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        local_88 = 1;
        cVar1 = FUN_00b704b0(uVar5,local_b8);
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          local_70 = *param_2;
          local_68 = '\0';
          FUN_00cde020();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = FUN_00e7dde0();
          lVar3 = _CFURLCreateFromFileSystemRepresentation(0,(int64_t)iVar2);
          if (lVar3 != 0) {
            iVar2 = _ExtAudioFileCreateWithURL(0,local_b8,1,local_40);
            _CFRelease();
            if (iVar2 == 0) {
              iVar2 = _ExtAudioFileSetProperty(local_b8,0x28);
              if ((iVar2 == 0) && (iVar2 = _ExtAudioFileSetProperty(local_b8), iVar2 == 0)) {
                FUN_00c8e600();
                lVar3 = CONCAT44(uStack_54,local_58);
                if (((char)local_50 == '\0') && (lVar3 != 0)) {
                  FUN_00d50b00();
                  if (((char)local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
                    FUN_00d50b20();
                  }
                }
                while( true ) {
                  local_58 = 1;
                  local_50 = uStack_9c;
                  local_4c = *(uint *)(lVar3 + 0x18);
                  local_48 = *(void*)(lVar3 + 0x10);
                  local_5c = local_4c / uStack_a0;
                  iVar2 = _ExtAudioFileRead(local_48,&local_58);
                  if (iVar2 != 0) {
                    _ExtAudioFileDispose();
                    _ExtAudioFileDispose();
                    uVar4 = 0;
                    goto LAB_00b70a04;
                  }
                  if (local_5c == 0) break;
                  iVar2 = _ExtAudioFileWrite();
                  if (iVar2 != 0) {
                    _ExtAudioFileDispose();
                    _ExtAudioFileDispose();
                    uVar4 = 0;
                    if (lVar3 == 0) {
                      return 0;
                    }
LAB_00b70a04:
                    FUN_00d50b20();
                    return uVar4;
                  }
                }
                _ExtAudioFileDispose();
                uVar4 = 1;
                _ExtAudioFileDispose();
                goto LAB_00b70a04;
              }
              _ExtAudioFileDispose();
            }
          }
        }
      }
      _ExtAudioFileDispose();
    }
  }
  return 0;
}

