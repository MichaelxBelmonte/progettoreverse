// Function: FUN_0168faf0
// Address: 0168faf0
// Size: 516 bytes
// Class: MUAraModelManager
// String references:
//   "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
//   "plugInWrapper->_isEditorRenderer"
//   "!plugInWrapper->_regionSequencesForPreview->getCount()"
//   "!plugInWrapper->getPlaybackRegionsForPreview()->containsObjectIdenticalTo(playbackRegion)"
//   "provided object ref is invalid"
//   "call required from document main thread"


/* WARNING: Removing unreachable block (ram,0x0168fc84) */
/* WARNING: Removing unreachable block (ram,0x0168fc8d) */

void FUN_0168faf0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_stack_ffffffffffffffc0;
  char local_38;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (*(longlong *)(unaff_RDI + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      FUN_016aea20();
    }
    else if (*(char *)(unaff_RDI + 0xa6) == '\0') {
      FUN_016aea20();
    }
    else if ((unaff_RSI == 0) || (cVar2 = FUN_01658870(), cVar2 == '\0')) {
      FUN_016aea20();
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      lVar1 = *(longlong *)(unaff_RDI + 0x98);
      if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffc0 == lVar1) {
        if (*(int *)(*(longlong *)(unaff_RDI + 0xb8) + 0xc) != 0) {
          FUN_016aea20();
        }
        lVar1 = *(longlong *)(unaff_RDI + 0xb0);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00d24090();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          FUN_0168f6a0();
        }
        else {
          FUN_016aea20();
        }
      }
      else {
        FUN_016aea20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}


